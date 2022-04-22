#include <stdio.h>
#include<stdlib.h>
int main(int argc ,char *argv[]){

    if (argc == 1) // to exit with 0 if the user did not specify a file 
     exit (0);
    
    for (int numberOfFiles = 1 ;numberOfFiles < argc ;numberOfFiles++)  // iteration to operate on each file user specify (array of files) 
    {
    printf("\nfile %d.........\n",numberOfFiles); // indicate the start of file number n

    FILE *file = fopen(argv[numberOfFiles],"r");
    char fileInstance;

    // to deal with the case of coud not open specific file
    if (file == NULL){
            printf("wcat: cannot open file\n");
            exit(1);
            break;
        }
    
    else
       {
        // read file and print the content 
        while(1) {
        fileInstance = fgetc(file);
        if( feof(file) ) { 
         break ;
        }
        printf("%c",fileInstance);
        }

    }
  
        fclose(file);
        exit(0);
        printf("\n");
    }
   return 0;
}