#include<stdio.h>
struct Student{
    char name[50];
    int marks;
};
int main(){
    int n;
    FILE* fptr;
    scanf("%d",&n);
    struct Student students[n];
    for(int i=0;i<n;i++){
        getchar();
        fgets(students[i].name,50,stdin);
        scanf("%d",&students[i].marks);
    }
    fptr=fopen("students.txt","w");
    if(fptr!=NULL){
        for(int i=0;i<n;i++){
            //fputs(students[i].name,fptr);
            //fputs((char )students[i].marks,fptr);
            fprintf(fptr, "%s %s %d\n", students[i].name, "   ",students[i].marks);
            //fputw(students[i].marks,fptr);
        }
        fclose(fptr);
    }else{
        printf("FILE DOESN'T OPEN");
    }
    printf("%s",students[n-1].name);
  return 0;
}