### Write Files
```c
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
```

### Read Files
```c
#include <stdio.h>  // 입출력 관리 함수
#include <stdlib.h> // 메모리 할당 관리 함수
#include <string.h> // 문자열 관련 함수

typedef struct {    // 익명 구조체
    char menuName[20];
    int sugarLevel;
} Order;    // Order라는 이름의 type으로 전역에서 사용

int main(void) {

    // 행 수, 총합 초기화
    int rows, sum = 0;

    // 파일 구조체 포인터 할당
    // 시스템콜이 처리한 파일 관련 객체를 올려둔 메모리 주소
    FILE *orderFilePointer;

    // 파일 열기 동작 수행 요청
    orderFilePointer = fopen("orders.txt", "r");

    // 첫 줄을 읽어들여서, 정수인 경우 변수 n이 위치한 주소에 할당
    // n은 읽어들일 다음 행의 숫자를 의미
    fscanf(orderFilePointer, "%d", &rows);

    // Order 구조체 크기를 문서에서 알려준 행의 수만큼 메모리 할당
    Order *orders = (Order*)malloc(sizeof(Order) * rows);

    // 행 수만큼 파일 읽어들이고 출력하기를 반복
    for (int i = 0; i < rows; i++) {

        // 파일을 한 줄씩 읽어들여서 형식에 맞는 값을 해당 주소에 할당
        // menuName은 문자열, 즉 배열이므로 배열 이름은 첫 원소의 주소값을 가리킴 -> 별도의 & 표시가 필요 없음
        // sugarLevel은 int변수로서, fscanf에는 변수 값이 아니라, 변수가 담긴 주소값을 알려줘야하므로 &을 앞에 붙여야 함
        // menuName은 열어보면 [0] = 99 'c' [1] = 111 'o' 등을 담고 있는 배열
        // orders + i -> menuName은 다음 메뉴 이름으로 넘어감
        fscanf(orderFilePointer, "%s %d", ((orders + i) -> menuName), &((orders + i) -> sugarLevel));

        // menuName : coffee, sugar Level (0 ~ 10) : 5 
        // menuName : blacktea, sugar Level (0 ~ 10) : 3 
        // menuName : coffee, sugar Level (0 ~ 10) : 10 
        printf("menuName : %s, sugar Level (0 ~ 10) : %d \n", (orders + i) -> menuName, (orders + i) -> sugarLevel);

        // 당도 총 합 누적
        sum += (orders + i) -> sugarLevel;
    }

    // 당도 평균을 소수점 둘 째 자리까지 표기
    // 몫을 계산한 결과를 double 타입으로 변형
    printf("average of sugar level : %.2f", (double) sum / rows);

    fclose(orderFilePointer);

    return 0;
}

```
