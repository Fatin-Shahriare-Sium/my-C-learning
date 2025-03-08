#include<stdio.h>
void printArr(int arr[],int length){
    for(int m=0;m<length;m++){
        printf("%d ",arr[m]);
    }
}
void findLargest2ndInArray(int arr[],int arrLength){
    int temp;
    for(int i=0;i<arrLength-1;i++){
        for(int j=0;j<arrLength-1-i;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printArr(arr,arrLength);
    printf("The second ;lagest element in array is %d\n",arr[1]);
}
//void findLargest2ndInArray(int arr[],int arrLength){
    // int temp;
    // int length=arrLength;
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<length;j++){
    //         if(arr[j]>arr[j+1]){
    //             temp=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }  
    // }
    //    printArr(arr,length);
    // printf("\nThe largest 2nd sumber of Array is = %d",arr[length-2]);
 
//}
int main(){
int myArr[]={200,1,5,7,9,2,99,100,500,999,12,88};
findLargest2ndInArray(myArr,sizeof(myArr)/sizeof(myArr[0]));
}