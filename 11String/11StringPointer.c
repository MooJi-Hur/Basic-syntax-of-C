#include <stdio.h>
#include <string.h> // 문자 관련 함수, c11부터는 명시하지 않아도 동작

int main (void) {
    
    // 문자열 리터럴을 사용하기 위해서는 큰따옴표를 사용, 작은 따옴표는 문자 하나를 나타냄
    char *helloWorld = "Hello, world!";

    // 문자열 길이
    printf("%lu\n", strlen(helloWorld)); // 13

    // 문자열 출력
    printf("%s\n", helloWorld); // Hello, world!

    // 각 글자 출력
    printf("%c\n", helloWorld[0]);  // H
    printf("%c\n", helloWorld[2]);  // l
    printf("%c\n", helloWorld[11]); // d
    printf("%c\n", helloWorld[12]); // !
    return 0;
}