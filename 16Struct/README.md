### Struct
- 변수를 모아서 만든 객체

```c
#include <stdio.h>
#include <string.h>


// 구조체 정의
struct Definition {
    char month[10];
    int year;
};


// 구조체 정의와 선언을 함께 함
// 전역 변수로 사용 가능
struct Declaration {
    char month[10];
    int year;
} declaration;


// 구조체 정의, 선언, 초기화를 모두 함께한 경우
// 전역 변수로 사용 가능
struct InitializedDeclaration {
    char month[10];
    int year;
} initializedDeclaration = {"Nov.", 2024};


// 구조체를 새로운 타입으로 정의하여 사용하는 경우
typedef struct TypeDefinition {
    char month[10];
    int year;
} TypeDefinition;


int main (void) {

    // 구조체 자료형과 구조체 이름, 변수명을 모두 표기
    // 초기화 방법 1. 순서대로 중괄호 내 값을 입력
    struct Definition definition = {"Nov.", 2024}; 

    // 초기화 방법 2. 각 변수별로 값을 대입
    strcpy(definition.month, "Dec.");
    definition.year = 2025;

    // 상수로 관리됨. 문자열 값을 바로 입력할 경우 경고 발생
    // expression must be a modifiable lvalue
    strcpy(declaration.month, "Nov.");
    definition.year = 2025;
    printf("%s \n", initializedDeclaration.month);

    // 구조체를 타입으로 바로 사용하는 예시
    TypeDefinition typedefinition = {"Jan.", 2025};
    printf("%d \n", typedefinition.year);

    return 0;
}
```

### Pointer to Structs

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 익명 구조체, 구조체 이름을 사용하지 않는 경우도 있음
// typedef struct {
//     char month[10];
//     int year;
// } Calendar;

typedef struct Calendar {
    char month[10];
    int year;
} Calendar;

int main(void) {
    struct Calendar *calendar = malloc(sizeof(Calendar));

    strcpy(calendar -> month, "Nov.");
    (*calendar).year = 2025;

    // 표현 방식 이해
    // calendar.month : 변수 자체가 구조체 타입인 경우, 직접 접근하는 의미
    // (*calendar).month : calendar값은 주소이고, *calendar는 해당 주소의 값
    // 이어서 ) (*calendar).month는 해당 구조체 값에 접근하는 의미
    // (*calendar).month와 calendar -> month는 동일함
    // "->"" calendar 포인터가 가리키는 구조체로 이동 후 멤버에 접근
    printf("%s \n", (*calendar).month);
    printf("%d \n", calendar -> year);

    // 동적 메모리 할당 닫기
    free(calendar);

    return 0;
}
```