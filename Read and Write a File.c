#include<stdio.h>
#include<stdlib.h>
int main(void)
{
FILE *fptr;

char ch;
fptr=fopen("Nethra1.txt","w");
printf("Enter your Detailes:\n");
while((ch=getchar())!='\n')
{
putc (ch,fptr);
}
fclose(fptr);
fopen("Nethra1.txt","r");
printf("\n File content:\n\n");
while((ch=getc(fptr))!=EOF)
{
printf("%c",ch);
}
printf("\n End Of Nethra1 File \n\n");
fclose(fptr);
printf("Copying A Text From One To File To Other File\n");
printf("-------------------------------------------\n");
{
      int ch;
      FILE *fp,*fq;
      fp=fopen("Nethra1.txt","r");
      fq=fopen("JKtech.txt","w");
      if(fp==NULL||fq==NULL)
            printf("File does not exist..");
      else
            while((ch=fgetc(fp))!=EOF)
            {
                  fputc(ch,fq);
            }
      printf("File copied.....to JKtech File\n");
}

printf("Appending A File\n");
printf("-----------------------------------------\n\n");
{
      FILE *fp1, *fp2;
      char fname1[50],fname2[50],c;
      printf("Enter filename to open for reading : ");
      scanf("%s", fname1);
      // Open one file for reading
      fp1 = fopen(fname1, "r");
      if (fp1 == NULL)
     {
            printf("%s file does not exist..", fname1);
            exit(0);
      }
      printf("\nEnter filename to append the content : ");
      scanf("%s", fname2);
      // Open another file for appending content
      fp2 = fopen(fname2, "a");
      if (fp2 == NULL)
      {
            printf("%s file does not exist...", fname2);
            exit(0);
      }
      // Read content from file
      c = fgetc(fp1);
      while (c != EOF)
      {
            fputc(c,fp2);
            c = fgetc(fp1);
      }
      printf("\nContent in %s appended to %s\n", fname1,fname2);
      fclose(fp1);
      fclose(fp2);
}
{
    printf("-------------------------------------------\n\n");
    char ch[100], fname[20]; // create a buffer with enough size for N_CHARS chars and the null terminating char
    int n;
    printf("Enter number of characters to read from the file you want:\n");
    scanf("%d",&n);

    FILE *fp;
    printf("enter the name of the file:\t"); //usernamebackup.txt
    scanf("%20s", fname); // get a string with max 20 chars from stdin

    fp=fopen(fname,"r");

    if (fread(ch,1,n,fp)==n)  //5,usernamebackup.txt
        { // check that the desired number of chars was read
        ch[n] = '\0'; // null terminate before printing
        puts(ch);            // print a string to stdout and a line feed after
    }

    fclose(fp);
}

return 0;
}
