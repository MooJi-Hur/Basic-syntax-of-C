### Memory
- 프로그램을 실행하면 메모리에 프그램이 적재되어야 함
- 메모리는 네 가지 영역으로 나누어 관리됨
    - 코드 영역 : 소스 코드
    - 데이터 영역 : 전역 변수, 정적 변수
    - 힙 영역 : 동적 할당 변수
    - 스택 영역 : 지역 변수, 매 변수

### Global Variables
- 프로그램 시작과 함께 메모리의 데이터 영역에 할당
- 프로그램 어디서든지 접근 가능한 변수

```c
#include <stdio.h>

int myGlobalVariable = 5;

void changeValue () {
    myGlobalVariable = myGlobalVariable + 5;
}

int main(void) {

    printf("%d\n", myGlobalVariable);   // 5

    changeValue(); // 10 = 5 + 5

    printf("%d\n", myGlobalVariable);   // 5

    return 0;
}
```

### Local Variables

- 지역 변수를 선언할 경우 스택 영역에 할당
- 특정한 블록에서만 생성이 가능하며, 블록을 벗어나면 메모리에서 해제

```c
#include <stdio.h>

int main(void) {
    int a = 5;
    int b = 10;

    if (1) {
        // int a 는 if 구문이 실행될 때만 생성되었다가 구문이 끝나면 사라짐
        int a = 7;

        b = 12;

        // 내부의 a를 우선적으로 참조
        printf("inner a %p\n", &a); // 0x7ff7bfeff3c0 -> 새로운 영역에 할당됨

        printf("inner b %p\n", &b); // 0x7ff7bfeff3c4

        printf("inner a : %d\n", a);  // 7
    }

    printf("outer a %d\n", a);  // 5

    printf("outer b %d\n", b);  // 12

    printf("outer a %p\n", &a); // 0x7ff7bfeff3c8

    printf("outer b %p\n", &b); // 0x7ff7bfeff3c4 -> inner, outer 주소값 동일

    return 0;
}
```

### Static Variables
- 특정한 블록에서만 접근할 수 있음
- 프로그램 실행 시 메모리에 할당, 프로그램 종료 시 메모리에서 해제
- 데이터 영역에 적재

```c
#include <stdio.h>

void process() {
    static int a = 5;
    a = a + 1;

    // 주소값은 동일
    printf("inner a %p\n", &a);

    printf("inner process : %d \n", a);
}

int main(void) {
    process();  // 6
    process();  // 7
    process();  // 8

    return 0;
}
```

### Register Variables
- 메인 메모리 대신 CPU 레지스터를 이용하는 변수
- 매우 한정된 자원이므로 실제로 레지스터에서 처리되는지는 장담할 수 없음
- 속도가 빠르다고 하나, 어떤 용도로 쓰이는지는 모르겠음

```c
#include <stdio.h>

int main(void) {
    register int a = 10, i;

    for (i = 0; i < a; i++) {
        printf("%d\n", i);
    }

    return 0;
}
```

### Function Parameters
```c
#include <stdio.h>

void valueAdd(int valueA, int valueB) {
    valueA = valueA + valueB;

    printf("pointer Parameter valueA : %d \n", valueA);   // 12 
    printf("pointer Parameter valueB : %d \n", valueB);   // 7 

    printf("value Parameter &valueA : %p \n", &valueA);   // 0x7ff7bfeff3ac 
    printf("value Parameter &valueB : %p \n", &valueB);   // 0x7ff7bfeff3a8 
}

void pointerAdd(int *pointerA, int *pointerB) {
    *pointerA = *pointerA + *pointerB;

    printf("pointer Parameter pointerA : %p \n", pointerA);   // 0x7ff7bfeff3c8 
    printf("pointer Parameter pointerB : %p \n", pointerB);   // 0x7ff7bfeff3c4

    printf("pointer Parameter *pointerA : %d \n", *pointerA); // 12 
    printf("pointer Parameter *pointerB : %d \n", *pointerB); // 7 

    printf("pointer Parameter &pointerA : %p \n", &pointerA);  // 0x7ff7bfeff3a8 
    printf("pointer Parameter &pointerB : %p \n", &pointerB);  // 0x7ff7bfeff3a0 
}

int main(void) {
    int a = 5;
    int b = 7;


    valueAdd(a, b);

    printf("%d \n", a); // 5

    printf("main value a : %p \n", &a); // 0x7ff7bfeff3c8 
    printf("main value b : %p \n", &b); // 0x7ff7bfeff3c4 


    pointerAdd(&a, &b);
 
    printf("%d \n", a); // 12

    printf("main value a : %p \n", &a); // 0x7ff7bfeff3c8 
    printf("main value b : %p \n", &b); // 0x7ff7bfeff3c4 
   
    return 0;
}
```