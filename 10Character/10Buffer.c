#include <stdio.h>

int main (void) {
    int a;
    char b;

    int tempBuffer;

    // 46을 입력하려고 하면, 엔터키를 치게 됨
    // 입력 버퍼 내 존재하는 값 : 46\n
    // scanf를 통해 &a에 46을 담음
    scanf("%d", &a);

    // 입력 버퍼에 내 존재하는 값 :  \n
    printf("%d\n", a);

    // 아래 getchar를 이용한 구문을 작성하지 않을 경우, &b에는 '\n'이 담기게 되고, 의도와는 달리 프로그램이 종료됨
    // getchar()함수는 stdin(표준입력)에서 한 문자를 읽고, 그 값을 반환하는 함수
    // 반환된 값은 tempBuffer에 저장하게 됨
    // getchar()가 실행되면, tempBuffer에 입력 버퍼에 있던 값을 읽어옴
    // tempBuffer : \n
    // 입력 버퍼 내 존재하는 값 : 없음 -> while 구문이 다시 실행되지는 않음
    // 이 구문은 사용자가 입력하는 값은 없고, 기존 입력 버퍼 내용을 처리하는 코드
    while ((tempBuffer = getchar()) != EOF && tempBuffer != '\n') {
        // 첫 입력을 46ww로 했을 경우, ww를 소진하는 과정을 수행함
        // 버퍼에서 읽어들인 값이 파일의 끝도 아니고, 개행 문자도 아니기 때문에, 다음 값을 읽어들이는 getchar()를 수행
        // w 글자는 tempBuffer에 담겼다가 치환됨으로써 사라짐
     }

    scanf("%c", &b);
    printf("%c\n", b);

    return 0;
}