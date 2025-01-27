#include<stdio.h>

int main(){
    long int number=0,sum=1;
    printf("Please,give the number for factorial");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        sum=sum*i;
    }
    printf("the value of %d! is: %d",number,sum);
return 0;
}