#include<stdio.h>
int main(){
    int x=10521;
    int temp=x;
    while(temp>0){
        printf("%d",temp%10);
        temp=temp/10;
    }
    return 0;
}