#include<stdio.h>
int main(){
    int x,y;
    printf("Give point of x:");
    scanf("%d",&x);
    printf("Give point of y");
    scanf("%d",&y);
    if(x>0 && y>0){
        printf("1st qUARDENT");
    }else if(x<0 && y>0){
        printf("2nd qUARDENT");
    }else if (x<0 && y<0){
        printf("3rd qUARDENT");
    }else
    {
        printf("4th qUARDENT"); /* code */
    }
    
}