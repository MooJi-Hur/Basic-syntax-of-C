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