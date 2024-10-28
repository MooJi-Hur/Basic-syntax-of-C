### 입출력
```c
#define _CRT_SECURE_NO_WARNINGS // scanf는 보안에 취약한 것을 인지하지만 사용하겠다는 문구

#include <stdio.h>

int main (void) {

    int a, b, c, d;

    double e;

    printf("정수 두 개를 입력해주세요.\n");

    // 형식 지정자를 사용해 크기 할당
    // 입력 받은 값을 할당할 변수의 주소값 &
    scanf("%d%d", &a, &b);

    printf("순서를 바꾸어서 출력할 수 있습니다.\n %d, %d \n", b, a);

    // 입력받은 하나의 값을 나누어서 보여주기
    printf("두 자리 정수를 입력하세요. \n");
    
    scanf("%1d%1d", &c, &d);

    printf("한 자리씩 나누어서 보여줍니다.\n %d, %d \n" , c, d);

    // 소숫점 자리 표기
    // double 형식은 입력을 받을 때는 %lf, 출력할 때는 %f로 표기
    printf("소수를 입력하면 소숫점 이하 둘째 자리까지 보여줍니다. \n");

    scanf("%lf", &e);

    printf("입력한 소수를 반올림해서 보여줄게요.\n %.2f \n", e);

    return 0;
}
```

- `scanf` 함수는 보안에 취약하므로 제품을 구현할 때는 잘 사용하지 않음
- `scanf` 는 standard input으로 형식과 주소를 인수로 받음
  - 변수명을 직접 입력하는 것이 아니라 `&변수명` 으로 표기
- `%1d` 는 정수에서 한 자리만 끊어서 가져옴
- `%.2f` 는 소숫점 둘 째 자리까지만 표기한다는 의미
- `printf`에서는 `float` 값을 `double`로 변환 할 수 있으므로 `%f`, `%lf` 모두 가능
- `scanf`에서는 형식 지정자를 구분해서 표현해야 함