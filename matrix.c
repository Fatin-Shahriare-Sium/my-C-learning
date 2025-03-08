#include<stdio.h>
int main(){
    int i,j,k;
    int n=2;
    int matrix1[1][2]={{3,4}};
    int matrix2[2][3]={{1,2,3},{3,4,5}};
    int multiplication[1][3];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            multiplication[i][j] = 0;
            for (k = 0; k < n; k++) {
                multiplication[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("%d",multiplication[0][1]);
 return 0;
}

