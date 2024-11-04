#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // 메모리 동적 할당
    int *allocated = malloc(sizeof(int));

    printf("%d \n", *allocated); // 0, 쓰레기 값일 수도 있음
    printf("%p \n", allocated); // 0x7fd418a04080 <- 힙에 할당된 메모리 주소
    printf("%p \n", &allocated); // 0x7ff7bfeff3a0 <- 스택에 있는 allocated 포인터 자체의 주소

    // 메모리 해제, 메모리 누수 방지를 위해 해야함
    // 스택에서는 해제를 할 필요 없으나 동적 할당되어 힙 영역에 할당된 메모리는 해제해야 함
    free(allocated);
    return 0;
}