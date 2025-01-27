#include<stdio.h>
int main(){
    int digit=0,sum=0;
    printf("Please,enter the number:/n");
    scanf("%d",&digit);
    for(0;digit>0;digit=digit/10){
        sum=sum+(digit%10);
    }
    printf("The sum of the digit is:%d",sum);
    return 0;

}