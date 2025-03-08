// #include<stdio.h>
// #include<math.h>
// void reverseNum(int num,int reversedNum);
// int main(){
//     int num;
//     scanf("%d",&num);
//     int numLength=log10(num)+1;
//     int reversedNum=0;
//     reverseNum(num,reversedNum);
    
    
//     return 0;
// }

// void reverseNum(int num,int reversedNum){
//     //printf("sbjieg");
//     if(num<=0){
//         printf("%d",reversedNum);
//     }else{
//         reverseNum(num/10,reversedNum*10+num%10);
//     }
    
    
    
// }

#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int num, int rev) {
    if (num == 0)
        return rev;
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reverseNumber(num, 0);  // Reverse the number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
