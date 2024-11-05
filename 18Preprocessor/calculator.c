#include "calculator.h" // calculator.h에 속한 파일임을 명시
#define PI 3.141592 // 상수 매크로
#define POWER(x) (x*x)  // 인자 매크로

double circleArea (double r) {
    double area = 0;

    area = PI * POWER(r);
    return area;
}