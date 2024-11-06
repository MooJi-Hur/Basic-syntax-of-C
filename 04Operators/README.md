### 대입 연산자
```c
#include <stdio.h>

int main(void) {
    int a;

    printf("현재 변수의 초기 값은 %d 입니다. \n변경할 정수를 입력해주세요. \n", a);
    scanf("%d", &a);

    printf("입력한 값은 %d 입니다. \n프로그램에서 7로 값을 변경하겠습니다. \n", a);

    // 대입 연산자
    a = 7;

    printf("변경된 결과를 보여드리겠습니다. \n %d \n", a);

    return 0;
}
```

### 산술 연산자
```c
#include <stdio.h>

int main(void) {
    //  산술 연산자
    int a,b;

    printf("연산할 정수 두 개를 입력하세요. \n");

    scanf("%d %d", &a, &b);

    printf("%d + %d = %d \n", a, b, a + b);
    printf("%d - %d = %d \n", a, b, a - b);
    printf("%d * %d = %d \n", a, b, a * b);

    // 몫
    printf("%d / %d = %d \n", a, b, a / b);

    // 나머지, %를 출력하기 위해 %%를 입력
    printf("%d %% %d = %d \n", a, b, a % b);
    return 0;
}
```

### 관계 연산자
```c
#include <stdio.h>

int main(void) {

    int a, b;

    printf("비교할 두 정수를 입력하세요. \n");

    scanf("%d %d", &a, &b);

    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);
    return 0;
}
```

- 0 : 거짓
- 1 : 참을 출력할 때 1을 반환
- 0이 아닌 수 : 입력 시 참으로 받아들임

### 논리 연산자
```c
#include <stdio.h>

int main(void) {

    int a, b, c;

    printf("논리를 비교할 세 정수를 입력하세요. \n");

    scanf("%d %d %d", &a, &b, &c);

    printf("첫 번째 값이 0인가? %d \n", !a);
    printf("첫 번째 값과 두 번째 값이 모두 0이 아닌가? %d \n", a && b);

    // 컴퓨터는 a > b > c 를 한 번에 비교할 수 없음
    printf("입력한 값이 점점 작아지는가? %d \n", (a > b) && (b > c));
    return 0;
}
```

### 증감 연산자
```c
#include <stdio.h>

int main(void) {
    int a;

    printf("a++, ++a, a--, --a를 차례로 실행합니다. \n초기 값으로 사용할 정수를 입력해주세요. \n");

    scanf("%d", &a);

    printf("현재 입력된 값은 %d 입니다. \n", a);

    printf("입력한 값에 1을 더했습니다.(a++) \n하지만 화면에는 계산 전의 값을 보여줍니다. \n %d \n", a++);

    printf("다음 출력에서는 현재 저장된 값을 보여줍니다. \n %d \n", a);

    printf("저장된 값에 1을 더했습니다. (++a) \n증가한 결과를 바로 보여줍니다. \n %d \n", ++a);

    printf("저장된 값에서 1을 뺐습니다.(a--) \n하지만 화면에는 계산 전의 값을 보여줍니다. \n %d \n", a--);

    printf("다음 출력에서는 현재 저장된 값을 보여줍니다. \n %d \n", a);

    printf("저장된 값에서 1을 뺐습니다. (--a) \n증가한 결과를 바로 보여줍니다. \n %d \n", --a);

    return 0;
}
```

### 삼항 연산자
```c
#include <stdio.h>

int main(void) {
    int a, b;

    printf("정수 두 개를 입력하세요. 값이 같다면 1을, 다르다면 0을 반환합니다. \n");

    scanf("%d %d", &a, &b);

    // 조건문 ? 참 : 거짓
    printf("첫 번째 값이 두 번째 값보다 큰가요? %d", (a > b) ? 1 : 0);

    return 0;
}
```

### 비트 연산자
```c
#include <stdio.h>

int main() {
    int a = 5;    // 이진수로는 0101
    int b = 3;    // 이진수로는 0011

    printf("a = %d (이진수: 0101)\n", a);
    printf("b = %d (이진수: 0011)\n", b);

    // AND 연산
    int andResult = a & b;  
    // 각 자리마다 모두 1이 있는 경우만 1로 반환
    printf("a & b = %d (0101 & 0011 = 0001)\n", andResult);

    // OR 연산
    int orResult = a | b; 
    // 각 자리마다 하나라도 1이 있으면 1로 반환
    printf("a | b = %d (0101 | 0011 = 0111)\n", orResult);

    // XOR 연산 - 배타적 연산
    int xorResult = a ^ b; 
    // 각 자리의 값이 같지 않을 때에만 1로 반환
    printf("a ^ b = %d (0101 ^ 0011 = 0110)\n", xorResult);

    // NOT 연산
    int notResult = ~a; 
    // 각 자리의 값을 반전 (홀수 -> 짝수, 부호도 반전)
    // 결과가 -6임을 유의 (원래의 값보다 1이 작은 음수)
    printf("~a = %d (~0101 = 1010)\n", notResult);

    // 왼쪽 시프트 연산
    int leftShift = a << 1; 
    printf("a << 1 = %d (0101 << 1 = 1010 (2배 커짐))\n", leftShift);

    // 오른쪽 시프트 연산
    int rightShift = a >> 1;  
    printf("a >> 1 = %d (0101 >> 1 = 0010 (2배 작아짐))\n", rightShift);

    return 0;
}
```