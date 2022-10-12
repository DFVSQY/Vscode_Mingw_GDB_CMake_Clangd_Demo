#include "c_math.h"
#include <stdio.h>

int main() {
    printf("hello world\n");

    int a = 20, b = 50;
    int c = add(a, b);
    int d = sub(a, b);
    printf("c:%d d:%d\n", c, d);

    return 0;
}