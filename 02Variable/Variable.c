#include <stdio.h>  // #include 전처리기(컴퍼일 전에 처리) 정의, stdio.h 표준 입출력 관련 헤더 파일

int a;  // 자료형 int, 변수명 a인 변수 선언, int 자료형의 정적 변수 초기 값은 0

// c 프로그램은 메인 함수를 가장 먼저 처리함
int main (void) {
    int intType; // 동적 변수는 int는 초기 값으로 쓰레기 값을 할당 ex. 1554440272

    // a = 7;
    
    // printf : stdio.h에 있는 함수
    printf("This number is %d. \n", a);

    // 현재 컴퓨터에서 int 0의 크기 출력
    printf("The size of int is %zu bytes in C.\n", sizeof(intType));
    
    // 성공적으로 프로그램이 실행될 경우, 0을 반환
    return 0;
}