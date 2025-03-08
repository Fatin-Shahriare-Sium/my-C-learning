#include<stdio.h>
int main(){
    int rows,cols;
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            printf("#");
        }
        printf("\n");
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("#");
        }
        printf("\n");
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<(2*i-1);k++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}