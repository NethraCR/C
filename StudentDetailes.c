#include <stdio.h>
#include <stdlib.h>

struct studentDetailes
{
   int  Id;
   int Age;
   char Name[30];
   char course[30];

};

int main()
{
   int n;
   struct studentDetailes input;
  FILE *fptr;

   if ((fptr = fopen("D:\\StudentDetailes.txt","w")) == NULL){
       printf("Error! opening file");

      // Program exits if the file pointer returns NULL.
      exit(1);
  }


printf("Enter a student detailes:\n");
for(n = 1; n < 3; ++n)
{


printf("\nStudentName::");
scanf("%s",&input.Name);
printf("\nStudentId::");
scanf("%d",&input.Id);
printf("\nStudentAge::");
scanf("%d",&input.Age);
printf("\nStudentCourse::");
scanf("%s",&input.course);
{

  fwrite(&input, sizeof(struct studentDetailes),1, fptr);

  fclose(fptr);
}
}


 printf("Student Detailes are:\n");
 fptr = fopen("D:\\StudentDetailes.txt","r");
for(n = 1; n < 3; ++n)
   {
      fread(&input, sizeof(struct studentDetailes), 1, fptr);
      printf("Name: %s\nId: %d\nAge: %d\nCourse:%s\n", input.Name, input.Id, input.Age,input.course);

   }

  fclose(fptr);
  return 0;
}
