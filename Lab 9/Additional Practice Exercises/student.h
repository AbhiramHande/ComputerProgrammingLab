#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>
#include <string.h>
#define MAX_ARRAY_SIZE 50

typedef struct student Student;

struct student {
    int ID;
    char Name[25];
    int Marks[5];
    float Avg; 
};

void insert_new_student(int ID, char name[25], int marks[5]);
void print_all_students(void);

#endif