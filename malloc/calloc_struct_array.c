// Write a C-program for dynamically allocating the memory for  structure using calloc. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[20];
    int rollno;
    float marks;
};

int main() {
    struct Student *ptr;
    int i;

    ptr = (struct Student *)calloc(3, sizeof(struct Student));

    strcpy(ptr[0].name, "Sachin");
    ptr[0].rollno = 60421;
    ptr[0].marks = 65.5;

    strcpy(ptr[1].name, "Rahul");
    ptr[1].rollno = 60422;
    ptr[1].marks = 84.0;

    strcpy(ptr[2].name, "Priya");
    ptr[2].rollno = 60423;
    ptr[2].marks = 39.8;

    printf("Name\tRoll Number\tMarks\n");

    for (i = 0; i < 3; i++) 
        printf("%s\t%d\t\t%.1f\n", (ptr + i) -> name, (ptr + i) -> rollno, (ptr + i) -> marks);

    free(ptr);

    return 0;
}