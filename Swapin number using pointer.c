#include<stdio.h>
int main()
{
int x=10,y=20;
int *ptr1=&x;
int *ptr2=&y;
printf("Before swaping num1 is :%d,num2 is :%d\n",*ptr1,*ptr2);
*ptr1=*ptr1+*ptr2;
*ptr2=*ptr1-*ptr2;
*ptr1=*ptr1-*ptr2;
printf("After swaping num1 is :%d,num2 is :%d\n",*ptr1,*ptr2);
return 0;
}
