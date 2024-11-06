#include <stdio.h>

int main(void) {

    // 예전 c 언어는 조건문 괄호 내에서 초기화를 하면 컴파일이 되지 않았음
    // 현재는 for (int i = 1; i < 10; i++) { 를 사용해도 무관함
    int i, j = 0;

    // 초기화; break 조건문; 단락 종료 후 수행 구문
    // (;;) 혹은 (;1;)일 경우, 특별한 조건이 없어서 무한히 실행할 수 있음
    for (i = 1; i < 10; i++) {
        for (j = 1; j < 10; j++ ) {
            printf("%d * %d = %d", i, j, i * j);
            printf("\n");
        }

        printf("\n");
    }

    // i++, j++ 수행 후 i < 10, j < 10를 검사하여 중단한 상태
    // i = 10, j = 10
    printf("%d %d", i, j);
    return 0;
}