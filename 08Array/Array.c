#include <stdio.h>
#include <limits.h>

int main(void) {
    
    // 배열 : 자료형 변수명[크기] = {원소, };
    // int a[10] = {0, };로 선언할 경우, 크기에 맞춰서 0이 각 원소마다 담김
    int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
    
    // INT_MIN는 limits.h에 선언된 상수
    // -0x7fffffff - 1, -2147483648
    int i, maxValue = INT_MIN;

    // 배열을 순회하면서 저장된 maxValue 값보다 큰 값을 할당
    // 초기 maxValue 값은 가장 작은 정수
    for (i = 0; i < 10; i++) {
        if (maxValue < a[i]) maxValue = a[i];
        
    }

    printf("%d\n", maxValue);

    return 0;
}