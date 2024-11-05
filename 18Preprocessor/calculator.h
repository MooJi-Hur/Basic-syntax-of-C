#ifndef _CALCULATOR_H   // 조건부 컴파일 구문. 헤더파일 중복 참조 방지, #endif와 쌍으로 작성
#define _CALCULATOR_H   // 조건이 맞을 때, 헤더 파일을 정의

// 헤더 파일에는 사용할 함수, 변수의 선언을 추가
// 동일한 이름의 c파일에 #include "파일명.h"를 추가하여 연결
// 함수 전체 내용을 헤더 파일에 작성해도 동작은 함
double circleArea(double r);     

#endif
