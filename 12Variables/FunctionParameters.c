#include <stdio.h>

void valueAdd(int valueA, int valueB) {
    valueA = valueA + valueB;

    printf("pointer Parameter valueA : %d \n", valueA);   // 12 
    printf("pointer Parameter valueB : %d \n", valueB);   // 7 

    printf("value Parameter &valueA : %p \n", &valueA);   // 0x7ff7bfeff3ac 
    printf("value Parameter &valueB : %p \n", &valueB);   // 0x7ff7bfeff3a8 
}

void pointerAdd(int *pointerA, int *pointerB) {
    *pointerA = *pointerA + *pointerB;

    printf("pointer Parameter pointerA : %p \n", pointerA);   // 0x7ff7bfeff3c8 
    printf("pointer Parameter pointerB : %p \n", pointerB);   // 0x7ff7bfeff3c4

    printf("pointer Parameter *pointerA : %d \n", *pointerA); // 12 
    printf("pointer Parameter *pointerB : %d \n", *pointerB); // 7 

    printf("pointer Parameter &pointerA : %p \n", &pointerA);  // 0x7ff7bfeff3a8 
    printf("pointer Parameter &pointerB : %p \n", &pointerB);  // 0x7ff7bfeff3a0 
}

int main(void) {
    int a = 5;
    int b = 7;


    valueAdd(a, b);

    printf("%d \n", a); // 5

    printf("main value a : %p \n", &a); // 0x7ff7bfeff3c8 
    printf("main value b : %p \n", &b); // 0x7ff7bfeff3c4 


    pointerAdd(&a, &b);
 
    printf("%d \n", a); // 12

    printf("main value a : %p \n", &a); // 0x7ff7bfeff3c8 
    printf("main value b : %p \n", &b); // 0x7ff7bfeff3c4 
   
    return 0;
}