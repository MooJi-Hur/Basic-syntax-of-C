#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    // 파일에 입력할 문자열
    char helloWorld[20] = "Hello, World!";

    // 파일 구조체 포인터, 흔히 fp로 변수명을 쓰기도 함
    // 파일 구조체 포인터 생성 -> 파일 열기 -> 파일 처리 -> 파일 닫기
    FILE *filePointer;

    // 내부적으로는 systemcall을 호출할 예정
    // "w" -> 파일 쓰기 모드, "a" -> 파일에 내용을 추가하는 모드, "r" -> 읽기 모드
    // 기본 경로는 프로젝트의 현재 경로
    // 파일이 없을 경우, 만들어서 작성함
    filePointer = fopen("HelloWorld.txt", "w");

    // 파일 내에 내용을 기입 <-> fscanf : 파일 내용 읽어들이기
    fprintf(filePointer, "%s", helloWorld);

    // 파일 닫기 
    // 메모리 누수 방지를 위해 반드시 작성
    fclose(filePointer);

    return 0;
}