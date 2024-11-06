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