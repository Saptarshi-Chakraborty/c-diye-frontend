#ifndef PRG4_C
#define PRG4_C

#include "Prg2.c"
#include "Prg3.c"
#include "Prg5.c" // for writeHtmlFile

// void buildWebsite(union ALL_ELEMENTS elements[], int size)
// {
//     printf("Building website...\n");
// }

void buildWebsite1(HTML html, TEXTBOX textbox)
{
    printf("Building website1...\n");

    char *title = html.title;
    if (title == NULL)
        title = "Default Title";

    char htmlCode[1000];
    sprintf(htmlCode, "<!DOCTYPE html><html><head><title>%s</title></head><body></body></html>", title);
    // printf("%s\n", htmlCode);

    writeHtmlFile(htmlCode);

    return;
}

void buildWebsite2(struct TaggedData *array, int size)
{
    printf("Building website2...\n");

    char bodyCode[10000]; // 10KB


    for (int i = 0; i < size; i++)
    {
        printf("\nElement %d :\n", i + 1);
        switch (array[i].type)
        {
        case HTML_TYPE:
            printf("Html Title: %s\n", array[i].data.html.title);
            break;
        case TEXTBOX_TYPE:
            printf("Textbox Height: %d\n", array[i].data.textbox.height);
            printf("Textbox Width: %d\n", array[i].data.textbox.width);
            break;

        default:
            printf("Unknown type\n");
        }
    }
}

#endif // PRG4_C