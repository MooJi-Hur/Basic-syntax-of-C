### For
```c
#include <stdio.h>

int main(void) {

    // 예전 c 언어는 조건문 괄호 내에서 초기화를 하면 컴파일이 되지 않았음
    // 현재는 for (int i = 1; i < 10; i++) { 를 사용해도 무관함
    int i, j = 0;

    // 초기화; break 조건문; 단락 종료 후 수행 구문
    // (;;) 혹은 (;1;)일 경우, 특별한 조건이 없어서 무한히 실행할 수 있음
    for (i = 1; i < 10; i++) {
        for (j = 1; j < 10; j++ ) {
            printf("%d * %d = %d", i, j, i * j);
            printf("\n");
        }

        printf("\n");
    }

    // i++, j++ 수행 후 i < 10, j < 10를 검사하여 중단한 상태
    // i = 10, j = 10
    printf("%d %d", i, j);
    return 0;
}
```
- 수행 순서
  - `int i = 1` -> `i < 10` 확인 -> 내부 구문 실행 -> `i++` 
  - -> `i < 10` 확인 -> 내부 구문 실행 -> `i++` ..
  - -> `i < 10` 확인, 조건 불일치 시 중단

### While
```c
#include <stdio.h>

int main(void) {
    int i = 1, j = 1;

    // while문이 동작할 조건문을 괄호 내에 삽입
    while(i < 10) {
        printf("구구단 %d단\n", i);
        // 내부 while문이 동작한 뒤, j 값을 1로 초기화하여 다음 단을 수행 시 1부터 재시작
        j = 1;

        while (j < 10) {
            printf("%d * %d = %d", i, j, i*j);

            j++;
            printf("\n");
        
        }

        i++;
        printf("\n");
    }

    printf("%d %d", i, j);

    return 0;
}
```