#include <stdio.h>

int main(void) {
    
    int a;
    printf("정수 하나를 입력해주세요. 값이 10 이상인지, 0 이상인지 확인합니다. \n");

    scanf("%d", &a);

    printf("입력한 값은 %d 입니다. \n", a);

    // 조건문
    if (a >= 10) {
        printf("이 값은 10 이상입니다. \n");

    // 10 이상인 경우 종료. else if 구문으로 진입하지 않음
    } else if (a >= 0) {
        printf("이 값은 10 미만이고 0 이상입니다. \n");

    } else {
        printf("이 값은 0보다 작습니다. \n");
    }
}