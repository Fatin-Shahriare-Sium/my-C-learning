#include<stdio.h>
int main(){
    int definedNumx=0,number=0,length=0;
    printf("Please,enter the number");
    scanf("%d",&number);
    definedNumx=number;
    for(int i=0;number>0;i++){
        number=number/10;
        length+=1;
    }
    printf("total digit of %d is %d",definedNumx,length);
    return 0;
}