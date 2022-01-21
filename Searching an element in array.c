#include<stdio.h>

int arraySearch(int arr[],int size,int n)
{


int i;
for(i=0;i<size;i++)
{
if(n==arr[i])
{
return 1;
}
}
return 0;
}
int main()

{
    int n;
    int arr[5];
printf("Enter the no of elements:\n");
for(int i=0;i<5;i++)
{
printf("enter the numbers");
scanf("%d",&arr[i]);
}

for( int i=0;i<5;i++)
{
printf("elements are :%d\n",arr[i]);
}
printf("Enter a number want to search:");
scanf("%d",&n);

if(arraySearch(arr,5,n))
printf("Number is found");
else
printf("Number is not found");
return 0;
}



