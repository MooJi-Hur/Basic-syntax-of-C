#include <stdio.h>
#include <string.h>

int main(void) {
    char a[10];

    // sizeof(a) : 10
    printf("미리 정의한 문자 배열의 크기 : %lu \n", sizeof(a));

    // 입력 : 0987654321\n
    // gets와 달라 fgets는 입력받을 버퍼의 크기를 정할 수 있음
    // fgets는 최대 (sizeof(a) - 1)개의 문자와 마지막에 NULL 문자인 \0을 추가하여 저장함
    // 개행 문자 \n이 포함될 수 있으므로 유의
    fgets(a, sizeof(a), stdin);

    // 출력 098765432
    printf("%s", a);
    return 0;
}
