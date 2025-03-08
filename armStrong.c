#include<stdio.h>
#include<math.h>
int main(){
    int num=0,temp=0,sum=0;
    scanf("%d",&num);
    temp=num;
    int numLength=log10(num)+1;
   while(num!=0){
    int reminder=num%10;
    num=num/10;
    sum=sum+pow(reminder,numLength);

   }
  //printf("%d---%d\n",temp,sum);
   if(sum==temp){
    printf("%d is an armstrong number",temp);
   }else{
    printf("%d is not an armstrong number",temp);
   }
    return 0;
}