//
// Created by Ivo Georgiev on 2019-02-14.
//

#include <stdio.h>

void swap_int(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void print_array(int array[], int size) {
    int i = 0;
    for (; i < size - 1; i ++) {
        printf("%d, ", array[i]);
    }
    printf("%d\n", array[i]);
}