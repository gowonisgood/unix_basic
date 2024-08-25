#include <stdio.h>
#include <stdlib.h>
void init2D(int *arr, int rows, int cols) {
int i,j;
for(i=0; i < rows; i++) {
for(j=0; j < cols; j++) {
arr[i*cols +j] = 0;
}
}
}
int main() {
int *array;
int N=5;
int M=5;
array = malloc(sizeof(int)*N*M);
if(array != NULL) {
init2D(array, N, M);
}
// do anything yow want to
}
