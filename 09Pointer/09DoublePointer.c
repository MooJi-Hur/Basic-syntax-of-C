#include <stdio.h>

int main(void) {
    int a = 10;
    int *b = &a;
    int **c = &b;

    // *b가 가리키는 주소값 a의 값인 10을 출력
    printf("%d", **c);

    // a = *b = **c = 10 
    // &a = b = *c = 0x00007ff7bfeff3c8
    // &b = c = 0x00007ff7bfeff3c0
    // &c = 0x00007ff7bfeff3b8
    return 0;
}