#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COLS 3
#define ROWS 5
void init2DArrayRandom(int **arr, int rows, int cols);
void print2DArray(int **arr, int rows, int cols);


int main() {
// an array of int arrays (a pointer to pointers to ints)
int **array;
// allocate an array of N pointers to ints
// malloc returns the address of this array (a pointer to (int *)'s)
array = (int **)malloc(sizeof(int *)*ROWS);
// for each row, malloc space for its buckets and add it to
// the array of arrays
for(int i=0; i < ROWS; i++) {
array[i] = (int *)malloc(sizeof(int)*COLS);
}
// Use current time as seed for random generator
srand(time(0));
init2DArrayRandom(array, ROWS, COLS);
print2DArray(array,ROWS,COLS);
}

void init2DArrayRandom(int **arr, int rows, int cols) {
int i,j;
for(i=0; i < rows; i++) {
for(j=0; j < cols; j++) {
arr[i][j] = rand()%10;
}
}
}
void print2DArray(int **arr, int rows, int cols)
{
int i,j;
for(i=0; i < rows; i++) {
for(j=0; j < cols; j++) {
printf("[%d,%d]: %d\t",i,j, arr[i][j]);
}
printf("\n");
}}
