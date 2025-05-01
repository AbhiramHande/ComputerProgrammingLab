#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50

typedef struct {
    char name[MAX_NAME_LEN];
    int roll;
    int* marks;
    int num_marks;
} Student;

typedef struct Node {
    Student* student;
    struct Node* next;
} Node;

void addStudent(Student* arr, int index, char* name, int roll, int* mArr, int n);
Node* filterTopStudents(Student* arr, int n, float threshold);

int main() {
    int n = 3;
    Student registry[3];

    int m1[] = {90, 85, 88};
    int m2[] = {60, 70, 65};
    int m3[] = {95, 92, 93};

    addStudent(registry, 0, "Alice", 1, m1, 3);
    addStudent(registry, 1, "Bob", 2, m2, 3);
    addStudent(registry, 2, "Carol", 3, m3, 3);

    Node* top = filterTopStudents(registry, n, 85.0);

    printf("Top Students:\n");
    while (top) {
        printf("%s (Roll: %d)\n", top->student->name, top->student->roll);
        top = top->next;
    }

    return 0;
}
