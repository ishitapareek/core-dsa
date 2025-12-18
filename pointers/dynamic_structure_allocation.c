/* Use malloc() to dynamically allocate memory for a Student structure.
Use the pointer to:

-Input data from the user.
-Display the data.
-Free the memory using free(). */

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s = malloc(sizeof(struct Student));

    printf("Enter name, roll, marks: ");
    scanf("%s %d %f", s->name, &s->roll, &s->marks);

    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s->name, s->roll, s->marks);

    free(s);
    return 0;
}
