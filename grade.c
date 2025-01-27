#include<stdio.h>
int main(){
    int number=0;
    scanf("%d",&number);
    switch (number/10){
        case 10:
        printf("A+ mark");
        break;
        case 9:
        printf("A+ mark");
        break;
        case 8:
        printf("A mark");
        break;
        case 7:
        printf("B mark");
        break;
        case 6:
        printf("C mark");
        break;
        case 5:
        printf("D mark");
        break;
        default:
        printf("Fail");


    }
    return 0;
}