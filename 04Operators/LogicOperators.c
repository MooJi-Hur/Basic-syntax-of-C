#include <stdio.h>

int main(void) {

    int a, b, c;

    printf("논리를 비교할 세 정수를 입력하세요. \n");

    scanf("%d %d %d", &a, &b, &c);

    printf("첫 번째 값이 0인가? %d \n", !a);
    printf("첫 번째 값과 두 번째 값이 모두 0이 아닌가? %d \n", a && b);

    // 컴퓨터는 a > b > c 를 한 번에 비교할 수 없음
    printf("입력한 값이 점점 작아지는가? %d \n", (a > b) && (b > c));
    return 0;
}