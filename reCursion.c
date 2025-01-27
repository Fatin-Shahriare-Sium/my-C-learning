
#include <stdio.h>
int fact(int num);
int main() {
    // Write C code here
    int factValue=0;
    
    factValue=fact(7);
    printf("%d is good",factValue);
    return 0;
}
int fact(int num){
 
   if(num>0){
    return num * fact(num-1);
   }else{
return 1;
   }
    
}
