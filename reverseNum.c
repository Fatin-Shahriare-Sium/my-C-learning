#include<stdio.h>
#include<math.h>
void reverseNum(int num);
int main(){
    int number=1234;
    reverseNum(number);
    return 0;
}
void reverseNum(int num){
   int reverse=0;
   int temp=num;
   while(temp>0){
    reverse=reverse*10+temp%10;
    temp=temp/10;
   }
    printf("The reverse number is %d",reverse);
}