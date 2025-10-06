
#include <stdio.h>

typedef struct {
    int roll;
    char name[50];
    float marks;
} Student;

int main() {
    Student s = {1, "John", 85.5};
    printf("Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
    return 0;
}

