// Implement and write C-code for Linear Search in an array of hundred random numbers.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int arr[], int n, int elementToFind) {
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == elementToFind){
            printf("%d is in array at %d index", elementToFind, i);
            return 0;
        }
    }

    printf("%d is not in array", elementToFind);
    return 0;
}

int main() {
    int n, elementToFind;
    
    int arr[100];

    for (int i = 0; i < 100; i++) 
        arr[i] = i;

    printf("Enter element to find in array: ");
    scanf("%d", &elementToFind);
    
    linearSearch(arr, 100, elementToFind);

    return 0;
}