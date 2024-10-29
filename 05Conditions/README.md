### IF
```c
#include <stdio.h>

int main(void) {
    
    int a;
    printf("정수 하나를 입력해주세요. 값이 10 이상인지, 0 이상인지 확인합니다. \n");

    scanf("%d", &a);

    printf("입력한 값은 %d 입니다. \n", a);

    // 조건문
    if (a >= 10) {
        printf("이 값은 10 이상입니다. \n");

    // 10 이상인 경우 종료. else if 구문으로 진입하지 않음
    } else if (a >= 0) {
        printf("이 값은 10 미만이고 0 이상입니다. \n");

    } else {
        printf("이 값은 0보다 작습니다. \n");
    }
}
```

- `if`, `else if` 뒤 괄호에 조건문을 붙임
- 해당 조건을 만족하면 더이상 `else if` 혹은 `else` 구문을 건너뜀
- `else if`, `else` 구문은 생략 가능하나, 두 개의 if 문으로 구성할 경우 조건이 중첩되는지 확인