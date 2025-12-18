// Implement and write C-code for Binary Search in a sorted array of integers containing even numbers from 100 to 500 numbers.

#include <stdio.h>

int binarySearch(int arr[], int n, int elementToFind) {

    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == elementToFind) {
            printf("%d is found in array at index %d", elementToFind, mid);
            return 0;
        }
        
        else if (arr[mid] > elementToFind) 
            high = mid - 1;

        else
            low = mid + 1;
    }

    printf("%d is not found in array", elementToFind);
    return 0;
}


int main() {
    int arr[201];
    int elementToFind, element = 100;

    for (int i = 0; i < 201; i++) {
        arr[i] = element;
        element += 2; 
    }

    printf("Enter element to find: ");
    scanf("%d", &elementToFind);

    binarySearch(arr, 201, elementToFind);
    return 0;
}