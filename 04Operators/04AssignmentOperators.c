#include <stdio.h>

int main(void) {
    int a;

    printf("현재 변수의 초기 값은 %d 입니다. \n변경할 정수를 입력해주세요. \n", a);
    scanf("%d", &a);

    printf("입력한 값은 %d 입니다. \n프로그램에서 7로 값을 변경하겠습니다. \n", a);

    // 대입 연산자
    a = 7;

    printf("변경된 결과를 보여드리겠습니다. \n %d \n", a);

    return 0;
}