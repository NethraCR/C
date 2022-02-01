#include<stdio.h>
#include<stdlib.h>
int main(void)
{
struct college
{
char colname[30];
char address[30];
}col;
struct faculty
{
char facname[30];
char facid[30];
}b;
struct admin
{
struct college col[2];
struct faculty b[2];
};
FILE *fptr;//*fptr1
struct admin ad;
fptr=fopen("CollegeDatabase.txt","r");
//fptr1=fopen("result.txt","w");
if(fptr== NULL)
{
printf(stderr, "\nError opening college.txt\n\n");
exit(1);
}
for(int i=0;i<2;i++)
{
printf("detailes of college #%d\n",(i+1));
fscanf(fptr, "%s %s %s %c\n", &ad.col[0].colname,&ad.col[0].address,&ad.b[0].facname,&ad.b[0].facid);
printf("%s ", ad.col[0].colname);
printf("%s ", ad.col[0].address);
printf("%s ", ad.b[0].facname);
printf("%s\n ", ad.b[0].facid);
}


for(int i=0;i<2;i++)
{
while(fread(&ad, sizeof(struct admin),1,fptr))
fprintf("college name= %s address= %s facname= %s facid= %s\n",
ad.col[0].colname,ad.col[0].address,ad.b[0].facname,ad.b[0].facid);
fclose(fptr);
}
//fclose(fptr1);
return 0;
}




