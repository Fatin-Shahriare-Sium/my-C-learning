#include<stdio.h>
int main(){
    char text[50];
    char searchChar[1];
    int frequencyOFChar=0;
    printf("Give the string:\n");
    getchar();
    fgets(text,50,stdin);
    printf("Give the char you are looking\n");
    scanf("%c",&searchChar);

    for(int i=0;i<50;i++){
        if(text[i]==searchChar[0]){
            frequencyOFChar+=1;
        }
    }
    printf("Frequecy is %d",frequencyOFChar);
    return 0;

}