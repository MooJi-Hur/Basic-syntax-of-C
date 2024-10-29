### For
```c
#include <stdio.h>

int main(void) {

    // 초기화; break 조건문; 단락 종료 후 수행 구문
    // (;;) 혹은 (;1;)일 경우, 특별한 조건이 없어서 무한히 실행할 수 있음
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            printf("%d * %d = %d", i, j, i * j);
            printf("\n");
        }

        printf("\n");
    }
    return 0;
}
```