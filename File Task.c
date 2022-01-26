#include <stdio.h>

int main(void) {
  // creating a FILE variable
  FILE *fptr;

  // creating a variable to store filename
  char filename[255];
  char ch;

  // get file path from the user
  printf("Enter the filename: ");
  scanf("%s", filename);

  // open the file in write mode
  fptr = fopen(filename, "w");

  if (fptr != NULL) {
    printf("File created successfully!\n");

    // close the file
  printf("Enter Some Text Into File:");
  scanf("%s",ch);

  while((ch=getchar())!='\n')
  {
      putc(ch,fptr);
  }
  }
  fclose(fptr);

  //else {
   // printf("Failed to create the file.\n");
  //}
  fopen(filename,"r");
  printf("\n File Content:\n");
  while((ch=getc(fptr)!=EOF))
  {
      printf("%c",ch);
  }
  printf("\n End of the Nethra.txt File\n");
  fclose(fptr);
  return 0;
}
