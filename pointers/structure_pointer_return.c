/* Create a program that stores data of 5 Employees using an array of structures.
Write a function:
struct Employee* findHighest(struct Employee *e, int n);
[that returns a pointer to the employee with the highest marks.] */

#include <stdio.h>
struct Employee {
    char name[50];
    float marks;
};

struct Employee* findHighest(struct Employee *e, int n) {
    struct Employee *max = &e[0];
    for(int i = 1; i < n; i++) {
        if(e[i].marks > max->marks) 
            max = &e[i];
    }
    
    return max;
}

int main() {
    struct Employee emp[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter name and marks for employee %d: ", i + 1);
        scanf("%s %f", emp[i].name, &emp[i].marks);
    }
    
    struct Employee *top = findHighest(emp, 5);
    printf("Highest: %s with %.2f marks\n", top->name, top->marks);
    return 0;
}
