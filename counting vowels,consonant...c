#include<stdio.h>
void main()
{
char str[100];
int i;
int vowel=0,consonant=0,digit=0,whitespace=0,specialcharacter=0;
printf("Enter a String");
gets(str);
for(i=0;str[i]!='\0';i++)
{

if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
{
vowel++;
}
else if((str[i]>='a'&& str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
{
consonant++;
}

else if(str[i]>='0'&& str[i]<='9')
{
digit++;
}
else if(str[i]==' ')
{
whitespace++;
}
else
{
specialcharacter++;
}
}
printf("number of vowel=%d",vowel);
printf("\nNumber of consonant=%d",consonant);
printf("\nNumber of digit=%d",digit);
printf("\nNumber of whitespace=%d",whitespace);
printf("\nNumber of specialcharacter=%d",specialcharacter);

}
