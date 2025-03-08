#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    
 
  while(n--){
    char text[200];
    scanf("%s",&text);
    int wordLength=strlen(text);
    int abbLength=0;
    
    if(wordLength>10){
        abbLength=wordLength-2;
        printf("%c",text[0]);
        printf("%d",abbLength);
        printf("%c",text[wordLength-1]);
        printf("\n");
    }else{
        printf("%s\n",text);
    }
    
  }
   return 0;

}