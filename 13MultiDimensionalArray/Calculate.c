#include <stdio.h>

int main(void) {

    int a[5] = {2, 4, 6, 8, 10};

    // 배열 a의 첫 주소값을 출력
    printf("%p \n", a);

    // 배열의 주소값이 연산되고 있음
    // 배열의 크기만큼 증가한 주소값이 출력
    // 0x7...3a0 
    // 0x7...3a4 
    // 0x7...3a8 
    // 0x7...3ac 
    // 0x7...3b0 
    for (int i = 0; i < 5; i++) {
        printf("%p \n", a + i);
    }

    // 포인터는 연산을 할 때 자료의 크기만큼 이동
    // 값이 출력됨 2 4 6 8 10
    for (int i = 0; i < 5; i++) {
        printf("%d \n", *(a + i));
    }

    // *(a + i)는 a[i]와 동일
    for (int i = 0; i < 5; i++) {
        printf("%d \n", a[i]);
    }
    return 0;
}