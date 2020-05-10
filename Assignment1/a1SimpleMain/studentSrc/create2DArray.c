#include <stdio.h>
#include <stdlib.h>
#include "arrayDefns.h"

/* Part 1 */
int *create2DArray ( int rows, int cols )
{
    int size = rows * cols;
    int *ptr = malloc(sizeof(int)* size);
    
    return ptr;
}
void set2DElement( int *array, int row, int col, int value )
{
    array[(row * col) + col] = value;
}

int get2DElement ( int *array, int row, int col )
{
    return array[(row * col) + col];
}

void free2DArray ( int *array )
{
    free(array);
}
