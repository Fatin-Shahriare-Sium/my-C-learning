#include<stdio.h>

int covertDecToBinary(int decNumber){
int n=decNumber;
int binArr[32];
int length=0;
for(int i=0;n>0;i++){
    binArr[i]=n%2;
    n=n/2;
    length+=1;
}

for(int j=length-1;j>=0;--j){
    printf("%d ",binArr[j]);
}


}

int main(){
    int decimalNumber=0;
    printf("Please,give decimal number to convert binary number:");
    scanf("%d",&decimalNumber);
    covertDecToBinary(decimalNumber);
return 0;
}