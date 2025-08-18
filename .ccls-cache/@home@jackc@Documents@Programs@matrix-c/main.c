#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>
#include <time.h>
#include <math.h>

typedef struct
{
    int rows;
    int columns;
    double* values;
} matrix; // row major

matrix* create_matrix(int row_count, int column_count, double* data){
    matrix* created_matrix = (matrix *)(malloc(sizeof(matrix)));
    created_matrix.rows = row_count;
    created_matrix.columns = column_count;
    memcpy()
}

matrix* fcreate_matrix(char* file){

}




int main(int argc, char **argv)
{
    printf("Hello World!");
    return 0;
}