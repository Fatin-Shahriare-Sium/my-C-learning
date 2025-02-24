#include<stdio.h>

int main(){
    int i,j,rows=5;
    for( i=0;i<rows;i++){
        for(j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=rows;i>0;i--){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
//FULL PYRAMID
    for(i=0;i<rows;i++){
        for(int m=0;m<rows-i;m++){
            printf(" ");
        }
        for(j=0;j<2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}