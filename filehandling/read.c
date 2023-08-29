#include <stdio.h>
int main() {
  FILE *fptr;

  // Create a file on your computer (filename.txt)
  fptr = fopen("filename.txt", "r");
 
  char readData[100];
  if(fptr!=NULL){
    while(fgets(readData,100,fptr)){
        printf("%s",readData);
    }
  }else{
     printf("unable to open file");
  }

  // Close the file
  fclose(fptr);

  return 0;
}
