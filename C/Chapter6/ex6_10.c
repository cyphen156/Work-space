#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
    int sum = 0, count;
    for (count = 1; count <= 10; count++) {
        sum += count;
    }
    printf("After loop, count is %d.\n", count);
    printf("Sum of 1 to 10 is %d.\n", sum);
    return 0;
}