/* Write a function to calculate the square of a number using a pointer as an
argument. */

#include <stdio.h>

int calculateSquare (int *num) {
    return *num * *num;
}

int main () {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square of %d is %d", num, calculateSquare(&num));

    return 0;
}