#include<stdio.h>
int calculateFactorial(int num){
    if(num>0){
        return num * calculateFactorial(num-1);
    }else{
        return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int result=calculateFactorial(n);
    printf("The factorial of %d is %d",n,result);
}