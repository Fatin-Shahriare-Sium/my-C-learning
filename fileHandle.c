#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("fati.txt","a+");
    char content[10000];
    if(fptr!=NULL){
        fgets(content,10000,fptr);
        fputs("Allah is only one",fptr);
        printf("%s",content);
        fclose(fptr);

    }else{
        printf("File din not open");
    }
}