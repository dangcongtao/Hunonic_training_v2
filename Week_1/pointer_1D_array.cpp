
#include <stdio.h>
#include <stdlib.h>

int n  = 3;
void input(int *&a) {
    a = (int*)malloc(n * sizeof(int));
    a[0] = 1;
    a[1] = 5;
    a[2] = 2;
}


void output(int *a) {
    for (int i = 0; i < n ; i ++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void arrange(int *&a) {
    int swap = 0;
    for (int i = 0; i < n; i ++) {
        for (int j = i; j < n; j++) {
            if (a[i] > a[j]) {
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }
}


int main() 
{
    int *a = NULL;

    /* function */
    input(a);
    output(a);
    arrange(a);
    output(a);

    /* deallowcate */
    free(a);
    a = NULL;

    return 0;
}