#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data array[4];

    array[0].i = 42;    // Store an integer
    array[1].f = 3.14f; // Store a float
    array[2].c = 'A';   // Store a char
    array[3].i = 69;    // Store an integer

    printf("Integer: %d\n", array[0].i);
    printf("Float: %f\n", array[1].f);
    printf("Char: %c\n", array[2].c);
    printf("Integer: %d\n", array[3].i);

    for (int i = 0; i < 4; i++)
    {
        printf("\n Item %d:\n", i + 1);
        printf("\tInteger: %d\n", array[i].i);
        printf("\tFloat: %f\n", array[i].f);
        printf("\tChar: %c\n", array[i].c);
    }

    return 0;
}