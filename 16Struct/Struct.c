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