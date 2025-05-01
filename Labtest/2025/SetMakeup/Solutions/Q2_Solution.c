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

void addStudent(Student* arr, int index, char* name, int roll, int* mArr, int n){
    strncpy(arr[index].name, name, MAX_NAME_LEN);
    arr[index].roll = roll;
    arr[index].num_marks = 3;

    arr[index].marks = (int*)calloc(n, sizeof(int));
    for(int i = 0; i < n; i++)
        arr[index].marks[i] = mArr[i];
}

Node* filterTopStudents(Student* arr, int n, float threshold){
    Node* list = NULL;

    for(int i = 0; i < n; i++){
        if(arr[i].num_marks <= 0)
            continue;

        float avg = 0;
        for(int j = 0; j < arr[i].num_marks; j++)
            avg += arr[i].marks[j];
        avg /= arr[i].num_marks;
        
        if(avg > threshold){
            Node* new_node = malloc(sizeof(Node));
            new_node->student = &arr[i];
            new_node->next = list;
            list = new_node;
        }
    }

    return list;
}

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
