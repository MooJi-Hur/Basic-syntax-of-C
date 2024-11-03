#include <stdio.h>

int myGlobalVariable = 5;

void changeValue () {
    myGlobalVariable = myGlobalVariable + 5;
}

int main(void) {

    printf("%d\n", myGlobalVariable);   // 5

    changeValue(); // 10 = 5 + 5

    printf("%d\n", myGlobalVariable);   // 5

    return 0;
}