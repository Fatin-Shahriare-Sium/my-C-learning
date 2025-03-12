#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr;
   ptr= (int *)malloc(3*sizeof(int));
   ptr[0]=3;
   ptr[1]=4;
   ptr[2]=5;
   ptr[3]=6;
   ptr[4]=3;
   ptr[5]=3;
   printf("%d",ptr[5]);
   free(ptr);
   return 0;
}