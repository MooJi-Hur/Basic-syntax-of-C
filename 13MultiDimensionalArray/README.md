### Multi-Dimensional Array
```c
#include <stdio.h>

int main(void) {
    int i, j, k;

    int a[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        }, {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // 다중 배열을 다중 반복문으로 꺼내어 표현
    for (i = 0; i < 2; i++) {
        printf("i : %d\n", i);

        for (j = 0; j < 3; j++) {
            printf("j : %d\n", j);

            for (k = 0; k < 4; k++) {
                printf("%d ", a[i][j][k]);
            }

            printf("\n");
        }

    }

    return 0;
}
```

### Array of Pointers and Pointer to an Array
```c
#include <stdio.h>

int main(void) {
    int originArray[5] = {0, 1, 2, 3, 4};

    // 일반적인 배열을 선언한 뒤, 값을 재할당하려고 하면
    int copiedArray[5];

    // expression must be a modifiable lvalue 
    // 왼쪽 값은 수정 가능한 표현이어야 한다는 문구가 뜸
    // 즉 상수로 관리하므로 a = b 형식으로 복사할 수 없음
    // copiedArray = originArray;

    // originArray = {0, 1, 2, 3, 4}
    // *originArray = *intPointer = 0
    // &originArray[0] = intPointer = 0x00007ff7bfeff3a0
    // &intPointer = 0x00007ff7bfeff370
    // originArray : 배열의 이름, 배열의 첫 번째 요소의 주소 
    // 아래 코드에서는 &originArray[0]의 값(즉, 주소값)을 할당하게 됨

    // int *intPointer = originArray;
    int *intPointer = &originArray[0];

    // originArray, &originArray, &originArray[0]의 주소값은 같으나 타입이 다름
    // int *intPointer는 int type 요소를 가리키는 포인터 ('int *')
    // &originArray는 int type 5개를 가진 배열의 주소 ('int (*)[5]')
    // 따라서 아래 코드는 타입 문제로 실행될 수 없음
    // int *intPointer = &originArray;

    // 포인터 배열 (Array of Pointers)
    // 배열의 각 원소는 int 값을 바라보는 주소값
    // arrayOfPointers[0] = 0x00...., *arrayOfPointers[0] = 33344..
    // 배열 초기화 시 리스트 형태가 아니라는 오류 발생
    // int *arrayOfPointers[5] = originArray;
    // 임의로 초기화
    int *arrayOfPointers[5];

    // arrayOfPointers[0]에 originArray의 주소인 &originArray[0]를 할당하는 코드
    // *arrayOfPointers[1]는 초기 쓰레기 값 그대로 남아 있음
    *arrayOfPointers = originArray;

    printf("%d \n", *arrayOfPointers[0]);   // 0
    printf("%d \n", *arrayOfPointers[1]);   // 1103560521

    // 각 포인터 배열 요소가 originArray의 각 요소를 가리키도록 하려면 반복문을 만들어야 함
    // arrayOfPointers[i] = &originArray[i]

    // 배열 포인터 (Pointer to an Array)
    // int 타입 5개로 이루어진 배열을 가리키는 포인터
    // pointerToAnArray = 0x00007ff7bfeff3a0
    // &pointerToAnArray = 0x00007ff7bfeff338
    int (*pointerToAnArray)[5] = &originArray;

    return 0;
}
```

### Calculate
```c
#include <stdio.h>

int main(void) {

    int a[5] = {2, 4, 6, 8, 10};

    // 배열 a의 첫 주소값을 출력
    printf("%p \n", a);

    // 배열의 주소값이 연산되고 있음
    // 배열의 크기만큼 증가한 주소값이 출력
    // 0x7...3a0 
    // 0x7...3a4 
    // 0x7...3a8 
    // 0x7...3ac 
    // 0x7...3b0 
    for (int i = 0; i < 5; i++) {
        printf("%p \n", a + i);
    }

    // 포인터는 연산을 할 때 자료의 크기만큼 이동
    // 값이 출력됨 2 4 6 8 10
    for (int i = 0; i < 5; i++) {
        printf("%d \n", *(a + i));
    }

    // *(a + i)는 a[i]와 동일
    for (int i = 0; i < 5; i++) {
        printf("%d \n", a[i]);
    }
    return 0;
}
```
