#include "c_math.h"
#include <stdio.h>

void test_too_small_loop_variable() {
    long size = 294967296l;
    /*
    This for loop is an infinite loop because the short type can’t represent all
    values in the [0..size] interval.

    Clang-Tidy Warning:
    Loop variable has narrower type 'short' than iteration's upper bound 'long'.
    */
    for (short index = 0; index < size; ++index) {
        printf("%d\n", index);
    }
}

void test_terminating_continue(int a) {
    do {
        /*
        Clang-Tidy Warning:
        'continue' in loop with false condition is equivalent to 'break' (fix
        available)
        */
        if (a > 0)
            continue;

        a++;
    } while (0);
}

int main() {
    printf("hello world\n");

    int a = 20, b = 50;
    int c = add(a, b);
    int d = sub(a, b);
    printf("c:%d d:%d\n", c, d);

    return 0;
}