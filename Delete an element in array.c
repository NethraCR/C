#include<stdio.h>
int main()
{


int array[100],position,i,n;
printf("Enter elements in array\n");
scanf("%d",&n);
printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("enter value to delete element\n");
scanf("%d",&position);
for(i=0;i<n;i++)
{
if(position>=n+1)
printf("Deletion not possible.\n");
else
{
for(i=position-1;i<n-1;i++)
array[i]=array[i+1];
printf("Resultant array is.\n");
for(i=0;i<n-1;i++)
printf("%d\n",array[i]);
}
return 0;
}

}
