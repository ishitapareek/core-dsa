// You are given a list of students with their marks in a subject.
// Write a C program to sort the students in ascending order of marks using Bubble Sort.
// Input: Number of students, followed by marks.
// Output: Sorted marks (ascending order).

#include <stdio.h>

void bubbleSort(int marks[], int n) {
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (marks[j] > marks[j + 1]) {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    
    printf("Enter number of elements to add: ");
    scanf("%d", &n);
    
    int marks[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter student marks: ");
        scanf("%d", &marks[i]);
    }
    
    bubbleSort(marks, n);
    
    printf("\nSorted marks in ascending order:\n");

    for (i = 0; i < n; i++)
        printf("%d\n", marks[i]);
        
    return 0;
}