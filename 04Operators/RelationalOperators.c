#include <stdio.h>

int main(void) {

    int a, b;

    printf("비교할 두 정수를 입력하세요. \n");

    scanf("%d %d", &a, &b);

    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);
    return 0;
}