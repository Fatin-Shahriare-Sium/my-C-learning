#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int problemArr[n][3];
    int ableToSolve=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&problemArr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<3;j++){
           if(problemArr[i][j]==1){
            count+=1;
           }
        }
        if(count==2){
            ableToSolve+=1;
        }
    }
    printf("%d",ableToSolve);
    return 0;
}