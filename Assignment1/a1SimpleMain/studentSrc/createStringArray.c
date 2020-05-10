#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayDefns.h"

/* Part 2 */
char **createStringArray ( int number )
{
    int i = 0;
    char **ptr = malloc(sizeof(char *) * number);
    
    /* allocating pointers to NULL */
    for (i =0; i<number; i++)
    {
        ptr[i] = NULL;
    }
    return ptr;
    
}
void setStringArray ( char **array, int index, char * string )
{
    array[index] = string;
}

char *getStringArray ( char **array, int index )
{
    return array[index];
}
void freeStringArray ( char **array, int number )
{
    free(array);
}
