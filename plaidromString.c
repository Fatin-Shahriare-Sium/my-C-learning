#include<stdio.h>
#include<string.h>
int main(){
    char word[50];
    scanf("%s",&word);
    int wordLength=strlen(word);
    int isPlaindrom=0;
    for(int i=0;i<wordLength/2;i++){
        printf("%d %d\n",i,wordLength-1-i);
      if(word[i]!=word[wordLength-1-i]){
         isPlaindrom=0;
      }else{
         isPlaindrom=1;
      }
    }

    if(isPlaindrom){
        printf("%s is a plaindrom",word);
    }else{
        printf("%s is not  a  plaindrom",word);
    }
    return 0;
}