#include<stdio.h>

int main(){
    int times=5;
    for(int i=0;i<9;i++){
        if(i>=5){
            times=times+1;
        }else{
            times=times-1;
        }
        for(int j=0;j<=times;j++){
            printf("%c ",'*');
        }
        printf("\n");
      
    }
    return 0;
}