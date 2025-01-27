#include<stdio.h>
int main(){
    int n=0;
    printf("Please,enter the rows of piramid: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        //5
        printf("%d\n",i);
        for(int j=1;j<=i;j++){
            printf("%d ",i%2);
        }
        printf("\n");
    }
    return 0;
}