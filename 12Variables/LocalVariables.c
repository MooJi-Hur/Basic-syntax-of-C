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