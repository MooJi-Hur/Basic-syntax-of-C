### Functions
```c
#include <stdio.h>

int factorialCalculator (int num) {
    if (num == 1) return num;
    else return num * factorialCalculator(num - 1);
}

int main (void) {
    int input;

    printf("팩토리얼을 계산합니다. \n");

    scanf("%d", &input);
    
    printf("%d", factorialCalculator(input));
    
    return 0;
}
```

- 함수는 출력값 자료형, 함수명, (자료형 및 입력 변수명), {본문 return 출력 값}으로 구성됨
- (자료형 및 입력 변수명)와 return 구문은 생략 가능하며 이 경우 자료명은 `void` 로 취급
- 재귀함수는 본문에 자기 자신을 호출하는 함수로 중단 조건을 설정하지 않으면 무한히 실행할 수 있음