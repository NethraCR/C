#include<stdio.h>
int main()
{
int array[50],position,i,n,value;
printf("Enter number of elements in the array\n");
scanf("%d",&n);
printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("enter the location where u want to insert\n");
scanf("%d",&position);
printf("enter the value\n");
scanf("%d",&value);
for(i=n-1;i>=position-1;i--)
    array[i+1]=array[i];
array[position-1]=value;
printf("Resultant array is\n");
for(i=0;i<=n;i++)
    printf("%d",array[i]);


}
int arrayInsert(int array[],int position,int n,int i,int value)
{
for(int i=0;i<position;i++)
{
if(n==array[i])
{
return 1;
}
}
return 0;
}
