// #include<stdio.h>

// int covertDecToBinary(int decNumber){
// int n=decNumber;
// int binArr[32];
// int length=0;
// for(int i=0;n>0;i++){
//     binArr[i]=n%2;
//     n=n/2;
//     length+=1;
// }

// for(int j=length-1;j>=0;--j){
//     printf("%d ",binArr[j]);
// }


// }

// int main(){
//     int decimalNumber=0;
//     printf("Please,give decimal number to convert binary number:");
//     scanf("%d",&decimalNumber);
//     covertDecToBinary(decimalNumber);
// return 0;
// }

#include<stdio.h>
void convertDecToBin(int dec);
int main(){
int dec=111;
convertDecToBin(dec);
return 0;
}

void convertDecToBin(int dec){
    int temp=dec;
    int arrLength=0;
    int binArr[32];
    for(int i=0;temp>0;i++){
        binArr[i]=temp%2;
        arrLength+=1;
        temp=temp/2;
    }
    for(int j=arrLength;j>0;j--){
        printf("%d",binArr[j-1]);
    }

    

}