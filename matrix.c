#include<stdio.h>
int main(){
    int i,j,k;
    int r1=1;
    int c2=3;
    int matrix1[1][2]={{3,4}};
    int matrix2[2][3]={{1,2,3},{3,4,5}};
    int multiplication[1][3];
    for (i = 0; i < r1; i++) {
        for (j = 0; j <c2; j++) {
            multiplication[i][j] = 0;
            for (k = 0; k < 2; k++) {
                multiplication[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("%d",multiplication[0][1]);
 return 0;
}

