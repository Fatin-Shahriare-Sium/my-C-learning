#include<stdio.h>
int main(){
    int i=1,ans=0;
    while(++i<5){
        ans=ans+i;
         printf("%d\n",i);
        i++;
        //need to set i++,otherwise it will cause infinity loop 
  
    }
   
    return 0;
}