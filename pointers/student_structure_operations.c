/* Define a structure Student with members:
-char name[50]
-int roll
-float marks 

Write a program to:
-Declare a variable of the structure.
-Declare a pointer to the structure.
-Use the pointer to input and print the student's details.
-Create an array of 3 Student structures and display all students records.

-Write a function:
void display(struct Student *s);
[That takes a pointer to a Student and prints the details.
In main(), create a structure variable, assign values through a pointer,
and call display().] */


#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void display(struct Student *s) {
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s->name, s->roll, s->marks);
}

int main() {
    struct Student s, *ptr = &s;
    printf("Enter name, roll, marks: ");
    scanf("%s %d %f", ptr->name, &ptr->roll, &ptr->marks);

    struct Student arr[3];

    for(int i = 0; i < 3; i++) {
        printf("Enter name, roll, marks for student %d: ", i+1);
        scanf("%s %d %f", arr[i].name, &arr[i].roll, &arr[i].marks);
    }

    for(int i = 0; i < 3; i++) 
        display(&arr[i]);

     return 0;
}
