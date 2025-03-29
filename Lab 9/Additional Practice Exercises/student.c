#include "student.h"

Student student_list[MAX_ARRAY_SIZE];
int count = 0;

void print_student(Student stud){
    printf("Student: %s (ID: %d)\n", stud.Name, stud.ID);
    printf("Marks obtained: ");
    for(int i = 0; i < 5; i++)
        printf("%d, ", stud.Marks[i]);
    printf("\b\b \n");
    printf("Average: %f\n", stud.Avg);

    return;
}

void print_all_students(void){
    for(int i = 0; i < count; i++)
        print_student(student_list[i]);
    return;
}

void insert_new_student(int id, char name[25], int marks[5]){
    Student stud;

    stud.ID = id;
    strncpy(stud.Name, name, 25);
    stud.Avg = 0;
    for(int i = 0; i < 5; i++){
        stud.Marks[i] = marks[i];
        stud.Avg += marks[i];
    }
    stud.Avg /= 4;

    student_list[count++] = stud;
}