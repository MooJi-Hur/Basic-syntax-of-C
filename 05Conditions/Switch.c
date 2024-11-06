#include <stdio.h>

int main(void) {
    int month;

    printf("월을 정수로 입력해주세요. 계절을 알려드립니다. \n");

    scanf("%d", &month);

    switch (month)
    {
    case 3:
    case 4:
    case 5:
        printf("봅");
        break;  // break 구문이 없을 경우, 조건에 관계 없이 아래 내용을 모두 출력함
    
    case 6:
    case 7:
    case 8:
        printf("여름");
        break;
    
    case 9:
    case 10:
    case 11:
        printf("가을");
        break;
    
    case 12:
    case 1:
    case 2:
        printf("겨울");
        break;
    
    default:    // 위 쪽에 break 구문이 없다면, 항상 출력될 예정
        printf("입력 값을 확인해주세요.");
        break;
    }

    return 0;
}