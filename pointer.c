#include<stdio.h>
int main(){
    //pointer variable actually stores the memory address of a variable
    int age=77;
    int* p=&age;
    printf("\n%p",&age);
    printf("\n%p",p);
}