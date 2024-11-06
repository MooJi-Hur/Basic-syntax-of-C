#include <stdio.h>

int main() {
    int a = 5;    // 이진수로는 0101
    int b = 3;    // 이진수로는 0011

    printf("a = %d (이진수: 0101)\n", a);
    printf("b = %d (이진수: 0011)\n", b);

    // AND 연산
    int andResult = a & b;  
    // 각 자리마다 모두 1이 있는 경우만 1로 반환
    printf("a & b = %d (0101 & 0011 = 0001)\n", andResult);

    // OR 연산
    int orResult = a | b; 
    // 각 자리마다 하나라도 1이 있으면 1로 반환
    printf("a | b = %d (0101 | 0011 = 0111)\n", orResult);

    // XOR 연산 - 배타적 연산
    int xorResult = a ^ b; 
    // 각 자리의 값이 같지 않을 때에만 1로 반환
    printf("a ^ b = %d (0101 ^ 0011 = 0110)\n", xorResult);

    // NOT 연산
    int notResult = ~a; 
    // 각 자리의 값을 반전 (홀수 -> 짝수, 부호도 반전)
    // 결과가 -6임을 유의 (원래의 값보다 1이 작은 음수)
    printf("~a = %d (~0101 = 1010)\n", notResult);

    // 왼쪽 시프트 연산
    int leftShift = a << 1; 
    printf("a << 1 = %d (0101 << 1 = 1010 (2배 커짐))\n", leftShift);

    // 오른쪽 시프트 연산
    int rightShift = a >> 1;  
    printf("a >> 1 = %d (0101 >> 1 = 0010 (2배 작아짐))\n", rightShift);

    return 0;
}
