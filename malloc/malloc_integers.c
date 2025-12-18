// Write a C-program for dynamically allocating the memory for five integers using malloc. 
// Assign five even numbers to this location and print them using pointer.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;   
    int i;

    ptr = (int *)malloc(5 * sizeof(int));

    for (i = 0; i < 5; i++) 
        ptr[i] = i * 2;  
    
    printf("The even numbers are:\n");

    for (i = 0; i < 5; i++) 
        printf("%d ", ptr[i]);
    
    free(ptr);

    return 0;
}
