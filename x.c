#include<stdio.h>
int main( )
{
  float cg;

  printf("Enter tne number:");
  scanf("%f",&cg);

  if(cg<=3.5)

    {
     if(cg==3.5)
     {
      printf("Average");
     }
     else
     {
         printf("Need improvement");
     }
    }
 else
 {
     printf("Faculty");
 }
 return 0;
}