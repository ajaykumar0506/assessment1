// add_sub_part1.c - Version 3
#include <stdio.h>

int main() {
    int a, b,sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum: %d\n", sum);
    int diff = a - b;
    printf("Difference: %d\n", diff);
    printf("Calculation complete.\n");
    return 0;
}


