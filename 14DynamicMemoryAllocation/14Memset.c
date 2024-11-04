#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *preparedA = malloc(100);

    // memset(포인터, 값, 크기);
    // 문자열을 의도한 값으로 미리 채우기
    memset(preparedA, 'A', 10);

    for (int i = 0; i < 50; i++) {
        printf("%c ", preparedA[i]); // A A A A A A A A A A x00 x00 x00 x00 ..
    }

    free(preparedA);

    return 0;
}