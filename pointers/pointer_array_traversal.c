/* Write a program to demonstrate incrementing a pointer to an integer array and
calculate the sum of all its values.*/

#include <stdio.h>

int main() {
    int arr[5], *p, sum = 0;

    printf("Enter 5 integers: ");
    
    for(int i = 0; i < 5; i++) 
        scanf("%d", &arr[i]);

    p = arr;

    for(int i = 0; i < 5; i++) {
        sum += *p;
        p++;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
