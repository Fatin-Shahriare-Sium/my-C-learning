#include<stdio.h>
void swapx(int* x, int* y) {
    int t=0;
    t=*x;
    *x=*y;
    *y=t;


    printf("Inside swapx: x = %d y = %d\n", *x, *y);
}

int main() {
    int a = 10, b = 20;

    // Pass by reference
    swapx(&a, &b); 

    printf("Inside main: a = %d b = %d", a, b);
    return 0;
}