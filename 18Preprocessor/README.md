### Preprocessor

- `main.c`
```c
#include <stdio.h>  // <>로 감쌀 경우 시스템 경로에서 헤더 파일을 탐색
#include "calculator.h"    // "" 큰따옴표로 감쌀 경우 현재 폴더에서 먼저 파일을 탐색한 후 시스템 경로에서 헤더 파일을 탐색
// 동일한 헤더 파일을 여러 번 작성하여 중복 처리하지 않도록 유의

// #include "calculator.h"  를 작성함으로써, calculator.h와 이에 연결된 ~.c에 있는 아래 내용을 main.c에 포함하는 효과
// double circleArea (double r) {
//     double area = 0;
//     area = PI * POWER(r);
//     return area;
// }

int main(void) {

    printf("원의 넓이 : %.2f", circleArea(5));

    return 0;
}
```

- `calculator.h`
```c
#ifndef _CALCULATOR_H   // 조건부 컴파일 구문. 헤더파일 중복 참조 방지, #endif와 쌍으로 작성
#define _CALCULATOR_H   // 조건이 맞을 때, 헤더 파일을 정의

// 헤더 파일에는 사용할 함수, 변수의 선언을 추가
// 동일한 이름의 c파일에 #include "파일명.h"를 추가하여 연결
// 함수 전체 내용을 헤더 파일에 작성해도 동작은 함
double circleArea(double r);     

#endif
```

- `calculator.c`
```c
#include "calculator.h" // calculator.h에 속한 파일임을 명시
#define PI 3.141592 // 상수 매크로
#define POWER(x) (x*x)  // 인자 매크로

double circleArea (double r) {
    double area = 0;

    area = PI * POWER(r);
    return area;
}
```
