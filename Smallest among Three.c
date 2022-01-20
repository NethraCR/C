#include<stdio.h>
void main()
{
int x,y,z;
printf("Ënter three integer numbers :");
scanf("%d%d%d",&x,&y,&z);
if(x<y && x<z)
printf("\n x is smallest:%d",x);
else
{
if(y<z)
printf("\n y is smallest:%d",y);
else
printf("\n z is smallest:%d",z);
}
}
