#include<stdio.h>
#include<math.h>
int checkPrime(int num){
    if(num<=0||num==1){
        return 0;
    }else{
        for(int i=2;i<num/2;i++){
            if(num%i==0){
                return 0;
            
            }
        }
        return 1;
    }
}
int main(){
int number=100,flag=0;
for(int a=0;a<=number;a++){
    
    int x=checkPrime(a);
    if(x==1){
        printf("%d is prime number\n",a);
    
    }
}

return 0;
}

// This function is to check
// if a given number is prime
// int isPrime(int n)
// {
//     // 0 and 1 are not prime numbers
//     if (n == 1 || n == 0)
//         return 0;

//     // Check for divisibility from 2 to sqrt(n)
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0)
//             return 0;
//     }
//     return 1;
// }

// // Driver code
// int main()
// {
//     int N = 50;

//     // Check every number from 1 to N
//     for (int i = 1; i <= N; i++) {
//         if (isPrime(i)) {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

