#include <stdio.h>

int factorialCalculator (int num) {
    if (num == 1) return num;
    else return num * factorialCalculator(num - 1);
}

int main(void) {
    int input;

    printf("팩토리얼을 계산합니다. \n");

    scanf("%d", &input);
    
    printf("%d", factorialCalculator(input));
    
    return 0;
}