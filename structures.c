#include <stdio.h>
#include <string.h>

// Defining Structure
typedef struct Student {
    int roll_no;
    char name[50];
    float marks;
} Student;

// Declaring Structure variables
Student s1, s2;

int main() {
    // Assigning values to s1
    Student s1 = {101, "Rishav", 91.3};

    // Printing values
    printf("Roll No: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
