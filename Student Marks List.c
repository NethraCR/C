#include<stdio.h>
void main()
{
 int Physics,Chemistry,Biology,Maths,Social;
 float Percentage;
 printf("Enter the Five subject marks");
 scanf("%d%d%d%d%d",&Physics,&Chemistry,&Biology,&Maths,&Social);
 Percentage=(Physics+Chemistry+Biology+Maths+Social)/5;
 printf("Percentage=%f\n",Percentage);
 if(Percentage>=90)
 {
 printf("Grade A");
 }
 else if(Percentage>=80)
 {
 printf("Grade B");
 }
 else if(Percentage>=70)
 {
 printf("Grade C");
 }
 else if(Percentage>=60)
 {
 printf("Grade D");
 }
 else if(Percentage>=40)
 {
 printf("Grade E");
 }
 else
 {
 printf("Grade F");
 }






}
