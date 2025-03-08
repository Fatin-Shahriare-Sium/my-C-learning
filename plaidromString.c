#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    scanf("%s",&str);
    char reverStr[4];
    int matchCount=0;
    for(int i=strlen(str)-1;i>=0;i--){
     printf("%d-%d\n",strlen(str)-i-1,i);

        reverStr[strlen(str)-i-1]=str[i];
       
    }

    for(int j=0;j<strlen(str);j++){
        if(str[j]==reverStr[j]){
            printf("%d",strlen(str));
            matchCount=matchCount+1;
        }
    }
    if(matchCount==strlen(str)){
        printf("it is A plaindrom string =%s",str);
    }else{
        printf("it is not a plaindrom string =%s",str);
    }
    return 0;
}