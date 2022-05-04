
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3


void input(int **a) {
    *a = (int*)malloc(SIZE*sizeof(int));
    (*a)[0] = 5;
    (*a)[1] = 1;
    (*a)[2] = 2;
}

void arrange(int **a) {
    int swap = 0;
    for (int i = 0 ; i < SIZE; i ++) {
        for (int j = i ; j < SIZE; j++) {
            if ((*a)[i] > (*a)[j]) {
                swap = (*a)[i];
                (*a)[i] = (*a)[j];
                (*a)[j] = swap;
            }
        }
    }
}

void output(int *a) {
    for ( int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main() {

    int *a;

    input(&a);
    output(a);

    arrange(&a);
    output(a);
    return 0;
}
