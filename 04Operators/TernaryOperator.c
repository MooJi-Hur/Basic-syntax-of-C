#include <stdio.h>

int main(void) {
    int a, b;

    printf("정수 두 개를 입력하세요. 값이 같다면 1을, 다르다면 0을 반환합니다. \n");

    scanf("%d %d", &a, &b);

    // 조건문 ? 참 : 거짓
    printf("첫 번째 값이 두 번째 값보다 큰가요? %d", (a > b) ? 1 : 0);

    return 0;
}