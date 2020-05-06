#include <stdio.h>
#include <stdlib.h>
#include "arrayDefns.h"

int *create2DArray ( int rows, int cols )
{
    int i;
    int *ptr = NULL;
    for (i=0; i<rows; i++)
    {
        ptr[i] = (int)malloc(sizeof(int)* cols);
    }
    return ptr;
}
void set2DElement( int *array, int row, int col, int value )
{
    array[row * col + col] = value;
}

int get2DElement ( int *array, int row, int col )
{
    return array[row * col + col];
}
void free2DArray ( int *array )
{
    free(array);
}
