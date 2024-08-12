/* run this file to build the project */

// task 1: read the main.c file and find the include statement
// task 2: read the included filenames with "" and remove the lines
// task 3: rewrite the whole file with the remaining lines in a temporary file
// task 4: dynamically generate and run the `Get-Content Prg1.c, Prg2.c | Set-Content combined.c` command to combine the files into a single C file
// task 5: run the gcc command to compile the combined file
// END OF TASKS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *mainFile = fopen("main.c", "r");
    FILE *tempFile = fopen("temp.c", "w");
    char line[1000];
    while(fgets(line, 1000, mainFile)){
        if(strstr(line, "#include \"") == NULL){
            fputs(line, tempFile);
        }
    }
    fclose(mainFile);
    fclose(tempFile);

    // get all the files starting with Prg and combine them into a single file

    system("gcc combined.c -o combined.exe");
    return 0;
}
