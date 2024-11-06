#include <stdio.h>
#include <string.h>

int main(void) {
    char myNameIs[40] = "My Name is ";
    char mooji[10] = "MooJi.";
    char search[5] = "is";

    printf("내 이름의 길이는 : %lu\n", strlen(mooji));

    // 결과 10
    // 두 문자에서 첫 글자는 M으로 동일 -> 0
    // 두 번째 문자는 각각 y (ASCII code 121), o (ASCII code 111)
    // 121 - 111 = 10
    // 따라서  My Name is 는 MooJi. 보다 10만큼 뒤에 있음
    printf("사전 순서 비교: %d\n", strcmp(myNameIs, mooji));

    // 띄어쓰기를 위해 myNameIs 변수 마지막에 공백을 추가했음
    strcat(myNameIs, mooji);
    printf("두 문자를 병합 : %s\n", myNameIs);

    // 검색한 내용의 주소값을 반환, printf로 출력 시 배열의 끝까지 출력
    printf("is로 검색한 결과 : %s\n", strstr(myNameIs, search));

    // a = b 형식으로 대입할 수 없음
    // 이제 myNameIs 값은 MooJi. 가 됨
    strcpy(myNameIs, mooji);
    printf("복사된 문자열 : %s\n", myNameIs);
    return 0;
}