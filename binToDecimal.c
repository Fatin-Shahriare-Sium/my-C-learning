#include<math.h>
#include<stdio.h>

int main(){
    int bin=11111111;
    printf("Please,enter the binary to convert in decimal:");
    scanf("%d",&bin);
    int decimal=0;
    for(int i=0;i<(int)log10(bin)+1;i++){
        int tempLastDigit=bin%10;
        decimal=decimal+tempLastDigit*pow(2,i);
    }
   printf("The binary of %d in %d ",bin,decimal);
    return 0;
}