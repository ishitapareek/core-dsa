/* Write a function that takes a structure Book with fields title, author, and price and
prints its content. Declare a pointer to a structure and access its members. */

#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

void printBook(struct Book *b) {
    printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", b->title, b->author, b->price);
}

int main() {
    struct Book book = {"The Great Gatsby", "F. Scott Fitzgerald", 1000.75};
    struct Book *ptr = &book;
    
    printBook(ptr);
    return 0;
}
