#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayDefns.h"

/* Part 3 */
int **createArray ( int rows, int cols )
{
    int **array =(int **) malloc(sizeof(int *) * rows);
    int i =0;
    for(i=0;i<cols;i++)
    {
        array[i] = (int *)malloc(sizeof(int) * cols);
    }
    return array;
}
void freeArray ( int **array, int rows, int cols)
{
    int i = 0;
    for(i=0;i<cols;i++)
    {
        free(array[i]);
    }
    free(array);
}
