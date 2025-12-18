// Write a C-program for dynamically increasing the memory allocated to the pointer in second problem 
// and now increase the memory for nine characters, insert A,B,C,D to the new memory location.

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

    printf("First 5 characters:\n");
  
    for (i = 0; i < 5; i++) 
        printf("%c ", ptr[i]);
    
    printf("\n");

    ptr = (char *)realloc(ptr, 9 * sizeof(char));

    ptr[5] = 'A';
    ptr[6] = 'B';
    ptr[7] = 'C';
    ptr[8] = 'D';

    printf("All characters after realloc:\n");

    for (i = 0; i < 9; i++) 
        printf("%c ", ptr[i]);

    free(ptr);

    return 0;
}
