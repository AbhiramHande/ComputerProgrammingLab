#include <stdio.h>
#include <stdlib.h>

#define ID_SIZE   14
#define NAME_SIZE 64
#define DEPT_SIZE 64

typedef struct {
    char id[ID_SIZE];
    char name[NAME_SIZE];
    char dept[DEPT_SIZE];
    int math_marks;
    int phy_marks;
    int chem_marks;
} student;

student* fun3(student* records, int size){
    for(int i = 0; i < size; i++){
        int min_id = i;
        for(int j = i + 1; j < size; j++)
            if(records[min_id].math_marks > records[j].math_marks)
                min_id = j;
        
        student temp = records[min_id]; 
        records[min_id] = records[i];
        records[i] = temp;
    }

    return records;
}

int main(int argc, char* argv[]){
    if(argc != 2){
        printf("Expected two arguments.\n");
        printf("Usage ./a.out <size of array>.\n");
        exit(EXIT_FAILURE);
    }

    int size =  strtol(argv[1], NULL, 10);
    if(size <= 0){
        printf("Invalid size.\n");
        exit(EXIT_FAILURE);
    }

    student* records = calloc(size, sizeof(student));
    for(int i = 0; i < size; i++){
        printf("Enter the information of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", records[i].name);
        printf("ID: ");
        scanf("%s", records[i].id);
        printf("Department: ");
        scanf("%s", records[i].dept);
        printf("Marks scored in Mathematics: ");
        scanf("%d", &records[i].math_marks);
        printf("Marks scored in Physics: ");
        scanf("%d", &records[i].phy_marks);
        printf("Marks scored in Chemistry: ");
        scanf("%d", &records[i].chem_marks);
        printf("\n");
    }

    records = fun3(records, size);

    printf("Students sorted by Maths marks:\n");
    for(int i = 0; i < size; i++){
        student s = records[i];
        printf("ID: %s, \tMath Marks: %d\n", s.name, s.id, s.dept, s.math_marks);
    }
    printf("\n");
}