#include <stdio.h>
#include <stdlib.h>
#include "arrayDefns.h"

/* Part 1 */
int *create2DArray ( int rows, int cols );
void set2DElement( int *array, int row, int col, int value );
int get2DElement ( int *array, int row, int col );
void free2DArray ( int *array );

/* Part 2 */
char **createStringArray ( int number );
void setStringArray ( char **array, int index, char * string );
char *getStringArray ( char **array, int index );
void freeStringArray ( char **array, int number );

/* Part 3 */
int **createArray ( int rows, int cols );
void freeArray ( int **array, int rows, int cols);



int main()
{
	int* array = create2DArray(2, 3);
    set2DElement(array, 2, 3, 5);
    set2DElement(array, 1, 1, 2521);

    int getElement = get2DElement(array, 2, 3);
    int secElement = get2DElement(array, 1, 1);

    printf("Element at 2 and 3 is %d\n", getElement);
     printf("Element at 1 and 1 is %d\n", secElement);
    free2DArray(array);
	
	return 0;
}


int *create2DArray ( int rows, int cols )
{
    int i;
    int *ptr = (int*)malloc(sizeof(int)*rows);
    
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


char **createStringArray ( int number )
{
    char **ptr = malloc(sizeof(char *) * number);
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
    
}
