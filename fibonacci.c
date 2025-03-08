

#include<stdio.h>
void showFibonacciSeries(int n);
int main(){
    int n;
    printf("Enter the nth :");
    scanf("%d",&n);
    showFibonacciSeries(n);
}

void showFibonacciSeries(int n){
    int n1=0,n2=1,next;
    printf("The fibonacci sereis of %d is ",n);
    for(int i=0;i<n;i++){
        printf("%d ",n1);
        next=n1+n2;
        n1=n2;
        n2=next;
    }
    

}