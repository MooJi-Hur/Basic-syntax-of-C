#include <stdio.h>

int main(void) {
    //  산술 연산자
    int a,b;

    printf("연산할 정수 두 개를 입력하세요. \n");

    scanf("%d %d", &a, &b);

    printf("%d + %d = %d \n", a, b, a + b);
    printf("%d - %d = %d \n", a, b, a - b);
    printf("%d * %d = %d \n", a, b, a * b);

    // 몫
    printf("%d / %d = %d \n", a, b, a / b);

    // 나머지, %를 출력하기 위해 %%를 입력
    printf("%d %% %d = %d \n", a, b, a % b);
    return 0;
}