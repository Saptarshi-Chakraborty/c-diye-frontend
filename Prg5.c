#ifndef PRG5_C
#define PRG5_C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void writeHtmlFile(char *htmlCode)
{
    FILE *file = fopen("out/index.html", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    fprintf(file, "%s", htmlCode);
    fclose(file);

    printf("File written successfully!\n");
}

#endif // PRG5_C