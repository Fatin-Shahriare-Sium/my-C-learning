#include<stdio.h>
#include<math.h>
void reverseNum(int num,int reversedNum);
int main(){
    int num;
    scanf("%d",&num);
    int numLength=log10(num)+1;
    int reversedNum=0;
    reverseNum(num,reversedNum);
    
    
    return 0;
}

void reverseNum(int num,int reversedNum){
    //printf("sbjieg");
    if(num<=0){
        printf("%d",reversedNum);
    }else{
        reverseNum(num/10,reversedNum*10+num%10);
    }
    
    
    
}

