#include <stdio.h>

void indirection(int ****n) {
    ****n = 3;
}

int main (void) {
    int n = 0;
    int *p1 = &n;
    int **p2 = &p1;
    int ***p3 = &p2;

    //indirection (&p3);
    printf("%d",&p2);
    printf ("Your number is %d\n", n);

    return 0;
}