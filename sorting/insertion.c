// A librarian wants to arrange books in alphabetical order of titles.
// Write a C program that uses Insertion Sort to sort an array of strings.
// Input: Number of books, followed by titles.
// Output: Sorted book titles in alphabetical order.


#include <stdio.h>
#include <string.h>

void insertionSort(char books[][100], int n) {
    int i, j;
    char key[100];

    for (i = 1; i < n; i++) {
        strcpy(key, books[i]);  
        j = i - 1;

        
        while (j >= 0 && strcmp(books[j], key) > 0) {
            strcpy(books[j + 1], books[j]);
            j = j - 1;
        }
        strcpy(books[j + 1], key);
    }
}

int main() {
    int n, i;
    char books[100][100];

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar(); 

    for (i = 0; i < n; i++) {
        printf("Enter title of book %d: ", i + 1);
        fgets(books[i], sizeof(books[i]), stdin);
        books[i][strcspn(books[i], "\n")] = '\0'; 
    }

    insertionSort(books, n);

    printf("\nBooks in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", books[i]);
    }

    return 0;
}
