### Array
- 배열은 같은 자료형의 데이터를 연속된 주소값에 담아 관리하기 위해 사용

```c
#include <stdio.h>
#include <limits.h>

int main(void) {
    
    // 배열 : 자료형 변수명[크기] = {원소, };
    // int a[10] = {0, };로 선언할 경우, 크기에 맞춰서 0이 각 원소마다 담김
    int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
    
    // INT_MIN는 limits.h에 선언된 상수
    // -0x7fffffff - 1, -2147483648
    int i, maxValue = INT_MIN;

    // 배열을 순회하면서 저장된 maxValue 값보다 큰 값을 할당
    // 초기 maxValue 값은 가장 작은 정수
    for (i = 0; i < 10; i++) {
        if (maxValue < a[i]) maxValue = a[i];
        
    }

    printf("%d\n", maxValue);

    return 0;
}
```

### Char Array
- c언어는 문자열 자료형이 없음
- 문자를 여러 개로 묶어서 관리

```c
#include <stdio.h>

int main(void) {

    // 큰 따옴표 ""로 감싸면 문자열로 인식
    // 문자열은 메모리의 여러 바이트에 연속해서 저장됨
    // char * 형식의 포인터로 취급
    char helloWorld[13] = "Hello World!";

    // 작은 따옴표 ''로 감싸면 하나의 문자로 인식하여 한 바이트만 차지
    // 한글은 한 바이트가 아니므로 경고 발생
    helloWorld[4] = ',';

    printf("%s", helloWorld);

    return 0;
}
```