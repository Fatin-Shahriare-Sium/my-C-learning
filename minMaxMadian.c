#include<stdio.h>

int main(){
    int a,b,c;
    printf("Give Three numbers");
    scanf("%d%d%d",&a,&b,&c);
    int min,max,median;
    max=((a>b)&&(a>c))?a:(b<c?c:b);
    min=((a<b)&&(a<c))?a:(b<c?b:c);
    median=a+b+c-max-min;
    printf("The maximum is %d",max);
    printf("The minimum id %d",min);
    printf("The median is %d",median);
}