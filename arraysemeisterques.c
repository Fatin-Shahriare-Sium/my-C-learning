#include<stdio.h>
int main(){
    int n=0;
    int sumOfOddNumber=0;
    int sumOfEvenNumber=0;
    printf("give your n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sumOfEvenNumber+=arr[i];
        }else{
            sumOfOddNumber+=arr[i];
        }
    }
    printf("sumOfOddNumber is %d",sumOfOddNumber);
    printf(" sumOfEvenNumber is %d", sumOfEvenNumber);
    return 0;

}