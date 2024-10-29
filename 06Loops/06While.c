#include <stdio.h>

int main(void) {
    int i = 1, j = 1;

    // while문이 동작할 조건문을 괄호 내에 삽입
    while(i < 10) {
        printf("구구단 %d단\n", i);
        // 내부 while문이 동작한 뒤, j 값을 1로 초기화하여 다음 단을 수행 시 1부터 재시작
        j = 1;

        while (j < 10) {
            printf("%d * %d = %d", i, j, i*j);

            j++;
            printf("\n");
        
        }

        i++;
        printf("\n");
    }

    printf("%d %d", i, j);

    return 0;
}