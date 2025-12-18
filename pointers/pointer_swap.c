/* Write a program to declare two integer variables and pointers to those variables.
Print the value and address of the variables using the pointer.
Swap these two numbers using pointers. */

#include <stdio.h>

int swapVariables (int *num1, int *num2) {
    int placeholder;

    placeholder = *num1;
    *num1 = *num2;
    *num2 = placeholder;
}

int main () {

    int var1 = 10;
    int var2 = 20;

    printf("Var 1\nValue: %d, Address: %p\n", var1, &var1);
    printf("Var 2\nValue: %d, Address: %p", var2, &var2);

    printf("\nAfter swap:\n");

    swapVariables(&var1, &var2);

    printf("Var 1\nValue: %d, Address: %p\n", var1, &var1);
    printf("Var 2\nValue: %d, Address: %p", var2, &var2);

    return 0;
}