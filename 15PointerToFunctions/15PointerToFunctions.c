#include <stdio.h>

void myFunction(void){
    printf("It's my function. \n");
}

void yourFunction(void) {
    printf("It's your function. \n");
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

// 함수 포인터를 함수로 만드는 경우
int (*addPrinter(char *prompt))(int, int) {
    printf("%s \n", prompt);
    return add;
}

int main(void) {
    // 함수 포인터의 선언
    // 반환자료명(*포인터이름)(매개변수)
    // 매개변수가 없더라도 괄호는 유지해야함
    void(*printFunction)() = myFunction;

    printFunction();    // It's my function.

    printFunction = yourFunction;

    printFunction();    // It's your function. 

    // 반환자료명(*포인터이름)(매개변수)
    int(*calculator)(int, int) = add;

    printf("%d \n", calculator(10, 3)); // 13

    calculator = sub;

    printf("%d \n", calculator(10, 3)); // 7

    // 함수 포인터를 함수로 만드는 경우, 각각의 파라미터를 모두 넣은 사례
    // add 10 and 3. 
    // 13
    printf("%d\n", addPrinter("add 10 and 3.")(10, 3));

    return 0;
}