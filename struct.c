#include<stdio.h>
float calculateGP(float mark);
struct GPOfSubject{
    float ECA;
    float Math;
    float SPL;
    float Physics;
};
struct STUDENT{
    int id;
    char name[70];
    struct GPOfSubject GPOfAllSubject;
    float CGPA;
};
void showArrayElements(struct STUDENT arr[],int size);
int main(){
    int size=0;
    float totalCGPA=0;
    printf("Enter the total student number ");
    scanf("%d",&size);
    struct STUDENT allStudent[size];

    for(int i=0;i<size;i++){
        float mark=0;
        printf("Enter your id: ");
        scanf("%d",&allStudent[i].id);
        printf("Enter your name :");
        //taking student name using fgets() ;
        getchar();
        fgets(allStudent[i].name,70,stdin);
        //taking ECA,MATH,SPL,PHYSICS number and convert into gp using calculateGP() functions
        printf("Enter your marks of ECA: ");
        scanf("%f",&mark);
        allStudent[i].GPOfAllSubject.ECA=calculateGP(mark);
        printf("Enter your marks of Math: ");
        scanf("%f",&mark);
        allStudent[i].GPOfAllSubject.Math=calculateGP(mark);
        printf("Enter your marks of SPL: ");
        scanf("%f",&mark);
       allStudent[i].GPOfAllSubject.SPL=calculateGP(mark);
        printf("Enter your marks of Physics: ");
        scanf("%f",&mark);
        allStudent[i].GPOfAllSubject.Physics=calculateGP(mark);
        //calculation cgpa and store it
        totalCGPA=(allStudent[i].GPOfAllSubject.ECA+allStudent[i].GPOfAllSubject.Physics+allStudent[i].GPOfAllSubject.Math+allStudent[i].GPOfAllSubject.SPL)/4;
        allStudent[i].CGPA=totalCGPA;
    }
    //showing the elements of struct allStudent array
    showArrayElements(allStudent,size);
    
return 0;
}

float calculateGP(float mark){
    if(mark>=80){
        return 4.00;
    }else if(mark>=75){
        return 3.75;
    }else if(mark>=70){
        return 3.50;
    }else if(mark>=65){
        return 3.25;
    }else if(mark>=60){
        return 3.00;
    }else if(mark>=55){
        return 2.75;
    }else if(mark>=50){
        return 2.50;
    }else if(mark>=45){
        return 2.25;
    }else if(mark>=40){
        return 2.00;
    }else{
        return 0.00;
    }
};

void showArrayElements(struct STUDENT arr[],int size){
    for (int m=0;m<size;m++){
        printf("ID= %d | Name= %s | ECA=%.2f Math=%.2f SPL=%.2f Physics=%.2f | CGPA= %.2f \n",arr[m].id,arr[m].name,arr[m].GPOfAllSubject.ECA,arr[m].GPOfAllSubject.Math,arr[m].GPOfAllSubject.SPL,arr[m].GPOfAllSubject.Physics,arr[m].CGPA);
    }
}