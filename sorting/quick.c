// A cinema database stores movie ratings as floating-point numbers.
// Write a C program to sort the ratings in descending order using Quick Sort.
// Input: Number of movies, followed by ratings.
// Output: Sorted ratings (highest first).

#include <stdio.h>

void swap(float arr[], int i, int j) {
    float temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(float arr[], int low, int high) {
    float pivot = arr[high];  
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] >= pivot) {  
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);
    return (i + 1);
}

void quickSort(float arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    printf("Enter number of movies: ");
    scanf("%d", &n);

    float ratings[n];
    for (int i = 0; i < n; i++) {
        printf("Enter rating of movie %d: ", i + 1);
        scanf("%f", &ratings[i]);
    }

    quickSort(ratings, 0, n - 1);

    printf("\nRatings in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%.1f\n", ratings[i]);
    }
    printf("\n");

    return 0;
}