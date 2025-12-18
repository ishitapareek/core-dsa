// Write a C-program for dynamically allocating the memory for five characters using malloc. 
// Assign five vowels to this location and print them using pointer.


#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr;  
    int i;

    ptr = (char *)malloc(5 * sizeof(char));

    ptr[0] = 'a';
    ptr[1] = 'e';
    ptr[2] = 'i';
    ptr[3] = 'o';
    ptr[4] = 'u';

    printf("The vowels are:\n");

    for (i = 0; i < 5; i++) 
        printf("%c ", ptr[i]);
    
    free(ptr);

    return 0;
}
