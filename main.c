#include <stdio.h>
#include <stdlib.h>
#include "Prg2.c"
#include "Prg3.c"
#include "Prg4.c"

// you have to declare all the variables globally to init their values to 0
HTML html;
TEXTBOX name;

int main()
{
    printf("Hello World\n");

    // title of the page
    html.title = "Hello new Title";

    struct TaggedData array[3];
    array[0].type = HTML_TYPE;
    array[0].data.html = html;

    array[1].type = TEXTBOX_TYPE;
    array[1].data.textbox = name;

    buildWebsite2(array, 2);
    
    return 0;
}
