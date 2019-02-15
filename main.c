#include <stdio.h>

#include "bubble_sort.h"

int main() {
    int a = 900;
//    int a;
    a = a + 1; // = is assignment, == is check for equality
    a ++; // syntactic sugar for a = a + 1;
    printf("Hello, %d!\n", a);

    printf("a is stored at 0x%llx \n\n", (unsigned long long) &a);

    int *p = &a;

    *p = *p + 1;

    printf("Hello, %d!\n", a);

    float f = (float) *p;

    printf("Hello, %f!\n", f);

    bubble_up();

    return 0;
}