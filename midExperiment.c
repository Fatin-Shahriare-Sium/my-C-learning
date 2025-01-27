#include<stdio.h>
int main(){
   int n=0;
   printf("please,enter your starting intiger");
   scanf("%d",&n);
   for(int i=0;n!=1;i++){
    if(n%2==0){
        n=n/2;
   }else{
    n=(n*3)+1;
   }
   printf("%d",n);
   }
   return 0;
}