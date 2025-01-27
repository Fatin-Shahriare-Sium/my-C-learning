#include<stdio.h>
int main(){
    int nymber=2;
    int flag=0;
    scanf("%d",&nymber);
    if(nymber<=0 || nymber==1  ){
        printf("%d is not prime number",nymber);
    }else{
for(int i=2;i<=nymber/2;i++){
 
        if(nymber%i==0){
            flag=1;
            break;
        }
    
    }
    if(flag==0){
        printf("%d is prime number",nymber);
     
    }else{
         printf("%d is not prime number",nymber);
    }
    }
    
    return 0;
}