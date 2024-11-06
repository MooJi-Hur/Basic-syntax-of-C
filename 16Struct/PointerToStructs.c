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