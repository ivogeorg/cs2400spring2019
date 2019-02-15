//
// Created by Ivo Georgiev on 2019-02-14.
//

#include <stdio.h>

#include "bubble_util.h"

void bubble_up() {
    int integer_array[] = { 23, 56, 12, 9, 4, 356, 122, 0, 2, 7 };

    printf("The array element at index 8 is %d\n", integer_array[8]);

    int arr_size = sizeof(integer_array) / sizeof(integer_array[0]);

    printf("Number of elements of array is %d\n", arr_size);

    print_array(integer_array, arr_size);

    for (int i = 0; i < arr_size; i ++) {
        for (int j = 0; j < arr_size - 1; j ++) {
            if (integer_array[j] > integer_array[j + 1]) {
                swap_int(&integer_array[j], &integer_array[j + 1]);
            }
        }
    }

    print_array(integer_array, arr_size);
}
