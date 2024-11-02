#include <stdio.h>

int main (void) {
    int a = 10; 

    int *b = &a;    

    // a = 10, &a = 0x00007ff7bfeff3d8
    // b = 0x00007ff7bfeff3d8, *b = 10, &b = 0x00007ff7bfeff3d0

    printf("%d\n", *b);
    return 0;
}