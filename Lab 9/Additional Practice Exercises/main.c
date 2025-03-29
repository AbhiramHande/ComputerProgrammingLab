#include "student.h"

int main(){
    int total;
    printf("Enter the number of students: ");
    scanf("%d", &total);

    for(int i = 0; i < total; i++){
        int ID;
        char name[25];
        int marks[5];

        printf("\nEnter the ID of Student %d: ", i + 1);
        scanf("%d", &ID);

        printf("Enter the name of Student %d: ", i + 1);
        scanf("%s", name);

        for(int i = 0; i < 5; i++){
            printf("Enter student's marks in subject %d: ", i + 1);
            scanf("%d", &marks[i]);
        }

        printf("\nPrinting Student Records: \n");
        insert_new_student(ID, name, marks);
    }

    print_all_students();
    return 0;
}