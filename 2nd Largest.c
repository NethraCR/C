#include<stdio.h>
void main()
{
 int a,b,c;
 printf("Enter three different numbers:");
 scanf("%d%d%d",&a,&b,&c);

 if(a>b && a>c)
 if(b>c)
 printf("%d is the second largest number",b);
 else
 printf("%d is the second largest number",c);
 if(b>a && b>c)
 if(a>c)
 printf("%d is the second largest number",a);
 else
 printf("%d is the second largest number",c);

 if(c>a && c>b)
 if(b>a)
 printf("%d is the second largest number",b);
 else
 printf("%d is the second largest number",a);


}
