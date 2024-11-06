### String
- 문자열 : 문자의 배열
- 문자열의 마지막은 `null`에 해당하는 `\0`로 끝남
- `printf` 함수에서는 문자열을 다룰 때 `null`을 만날 때까지 값을 출력함

### String Literal
- 포인터와 `"` 큰 따옴표를 사용해 문자열을 배열처럼 바로 선언할 수 있음
- 읽기 전용이며, 주소 값을 내부에서 알아서 배정함

```c
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
```

### fgets
```c
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[10];

    // sizeof(a) : 10
    printf("미리 정의한 문자 배열의 크기 : %lu \n", sizeof(a));

    // 입력 : 0987654321\n
    // gets와 달라 fgets는 입력받을 버퍼의 크기를 정할 수 있음
    // fgets는 최대 (sizeof(a) - 1)개의 문자와 마지막에 NULL 문자인 \0을 추가하여 저장함
    // 개행 문자 \n이 포함될 수 있으므로 유의
    fgets(a, sizeof(a), stdin);

    // 출력 098765432
    printf("%s", a);
    return 0;
}
```

### strlen, strcmp, strcpy, strcat, strstr
```c
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
```