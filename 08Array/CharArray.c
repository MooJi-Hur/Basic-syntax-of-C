#include <stdio.h>

int main(void) {

    // 큰 따옴표 ""로 감싸면 문자열로 인식
    // 문자열은 메모리의 여러 바이트에 연속해서 저장됨
    // char * 형식의 포인터로 취급
    char helloWorld[13] = "Hello World!";

    // 작은 따옴표 ''로 감싸면 하나의 문자로 인식하여 한 바이트만 차지
    // 한글은 한 바이트가 아니므로 경고 발생
    helloWorld[4] = ',';

    printf("%s", helloWorld);

    return 0;
}