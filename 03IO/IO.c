#define _CRT_SECURE_NO_WARNINGS // scanf는 보안에 취약한 것을 인지하지만 사용하겠다는 문구

#include <stdio.h>

int main (void) {

    int a, b, c, d;

    double e;

    printf("정수 두 개를 입력해주세요.\n");

    // 형식 지정자를 사용해 크기 할당
    // 입력 받은 값을 할당할 변수의 주소값 &
    scanf("%d%d", &a, &b);

    printf("순서를 바꾸어서 출력할 수 있습니다.\n %d, %d \n", b, a);

    // 입력받은 하나의 값을 나누어서 보여주기
    printf("두 자리 정수를 입력하세요. \n");
    
    scanf("%1d%1d", &c, &d);

    printf("한 자리씩 나누어서 보여줍니다.\n %d, %d \n" , c, d);

    // 소숫점 자리 표기
    // double 형식은 입력을 받을 때는 %lf, 출력할 때는 %f로 표기
    printf("소수를 입력하면 소숫점 이하 둘째 자리까지 보여줍니다. \n");

    scanf("%lf", &e);

    printf("입력한 소수를 반올림해서 보여줄게요.\n %.2f \n", e);

    return 0;
}
