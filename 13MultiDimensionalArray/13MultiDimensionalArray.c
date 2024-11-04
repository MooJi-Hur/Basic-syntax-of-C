#include <stdio.h>

int main(void) {
    int i, j, k;

    int a[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        }, {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // 다중 배열을 다중 반복문으로 꺼내어 표현
    for (i = 0; i < 2; i++) {
        printf("i : %d\n", i);

        for (j = 0; j < 3; j++) {
            printf("j : %d\n", j);

            for (k = 0; k < 4; k++) {
                printf("%d ", a[i][j][k]);
            }

            printf("\n");
        }

    }

    return 0;
}