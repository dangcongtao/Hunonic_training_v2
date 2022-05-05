
#include <stdio.h>
#include <stdlib.h>

#define SIZE1 3
#define SIZE2 2




void input(int ***a) {
    *a = (int**)malloc(SIZE1*sizeof(int*));
    for ( int i = 0; i < SIZE1; i ++) {
        (*a)[i] = (int*)malloc(SIZE2*sizeof(int));
    }

    int temp = 0;
    printf("here1\n");
    
    for (int i = 0 ; i < SIZE1; i ++) {
        for (int j = 0 ; j < SIZE2 ; j++) {
            scanf("%d", &temp);
            (*a)[i][j] = temp;
        }
    } 
   
}

/* doing here */
void arrange(int ***a) {
    int swap = 0;
    for (int i = 0 ; i < SIZE1; i ++) {
        for (int j = 0 ; j < SIZE2; j++) {
            for (int k = j; k < SIZE2; k++) {
                if ((*a)[i][j] > (*a)[i][k]) {
                    swap = (*a)[i][k];
                    (*a)[i][k] = (*a)[i][j];
                    (*a)[i][j] = swap;
                }
            }
        }
    }
}

void output(int **a) {
    for ( int i = 0; i < SIZE1; i++) {
        for ( int j = 0; j < SIZE2; j++) {
            printf("%d ", a[i][j]);
        }printf("\n");
    }
    printf("\n");
}



int main() {

    int **a;

    input(&a);
    output(a);

    arrange(&a);
    output(a);
    
    /* deallowcate */
    for (int i = 0 ; i < SIZE1 ; i ++) {
        free(a[i]);
    }
    free(a);

    return 0;
}
