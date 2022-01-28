#include<stdio.h>
int main(void)
{
struct Student
{
 char Name[30];
 char ID[20];
 char Branch[30];
};

struct Staff
{
 char Id[30];
 char Experience[40];
 };

 struct NonStaff
 {
 char NId[30];
 char Department[30];
 };

 struct Admin
 {
 struct Student std[3];
 struct Staff staff[3];
 struct NonStaff nonstaff[3];
 };

 struct Admin a;

for(int i=0;i<3;i++)
{
printf("\nDetails of student #%d\n",(i+1));
 printf("\nEnter Student Name\n");
 scanf("%s",a.std[i].Name);
 printf("\nEnter Student ID\n");
 scanf("%s",a.std[i].ID);
 printf("\nEnter Student Branch\n");
 scanf("%s",a.std[i].Branch);
 printf("\nEnter Staff Detailes\n");
 printf("\nEnter StaffId\n");
 scanf("%s",a.staff[i].Id);
 printf("\nEnter Staff Experience\n");
 scanf("%s",a.staff[i].Experience);
 printf("\nEnter Non Staff Id\n");
 scanf("%s",a.nonstaff[i].NId);
 printf("\nEnter Non Staff Department\n");
 scanf("%s",a.nonstaff[i].Department);

 }
 for(int i=0;i<3;i++)
 {
 printf("\n Detailes of Student #%d\n",(i+1));
 printf("Name:%s\n",a.std[i].Name);
 printf("StudentID:%s\n",a.std[i].ID);
 printf("Branch:%s\n",a.std[i].Branch);
 printf("StaffID:%s\n",a.staff[i].Id);
 printf("Experience:%s\n",a.staff[i].Experience);
 printf("NonStaffID:%s\n",a.nonstaff[i].NId);
 printf("Department:%s\n",a.nonstaff[i].Department);
 }
 return 0;

}
