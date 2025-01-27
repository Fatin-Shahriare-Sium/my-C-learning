#include<stdio.h>
int main(){
    int n1=0,n2=1,n=0;
    printf("nth fibonacci");
    int curr=0;
    scanf("%d",&n);
    printf("Fibonacci seris is: %d %d ",n1,n2);
    for(int i=3;i<=n;i++){
        curr=n1+n2;
        printf("%d ",curr);
        n1=n2;
        n2=curr;
        
    }
    return 0;
}