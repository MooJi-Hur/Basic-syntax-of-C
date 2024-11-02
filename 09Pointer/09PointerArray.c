#include <stdio.h>

int main (void) {

    // int a[]로 배열을 선언하면, a는 사실상 주소값으로 관리하는 중
    int a[] = {1, 2, 3, 4, 5};

    // 0x7ff7bfeff3c0 -> a[0]의 주소값과 동일
    printf("%p\n", &a);

    // 출력 결과 4byte씩 증가함을 확인
    // 0x7ff7bfeff3c0
    // 0x7ff7bfeff3c4
    // 0x7ff7bfeff3c8
    // 0x7ff7bfeff3cc
    // 0x7ff7bfeff3d0
    for (int i = 0; i < 5; i++) {

        // %p는 포인터 타입의 인수 형식 지정자
        // 각 배열의 원소 a[i]의 주소값을 나타내는 &a[i]
        printf("%p\n", &a[i]);
    }
    return 0;
}