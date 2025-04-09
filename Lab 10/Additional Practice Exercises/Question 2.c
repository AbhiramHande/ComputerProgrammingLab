#include <stdio.h>
#define MAX 128
struct Employee{
    int ID;
    float salary;
    char division[25];
};



void sort(struct Employee* employeeDB[], int size){
    for(int i = 0; i < size; i++){
        int min_index = i;
        for(int j = i+1; j < size; j++)
            if(employeeDB[j]->salary < employeeDB[min_index]->salary)
                min_index = j; 
        
        struct Employee* temp = employeeDB[min_index];
        employeeDB[min_index] = employeeDB[i];
        employeeDB[i] = temp;
    }

    return;
}

int main(){
    struct Employee employeeData[MAX];
    struct Employee* employeeDataPointers[MAX];

    int size;
    printf("Enter the number of employees: ");
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        printf("\nEnter the details of Employee %d.\n", i+1);
        printf("Enter the ID of Employee %d: ", i+1);
        scanf("%d", &employeeData[i].ID);
        printf("Enter the salary of Employee %d: ", i+1);
        scanf("%f", &employeeData[i].salary);
        printf("Enter the division that employee %d works in: ", i+1);
        scanf("%s", employeeData[i].division);
    }

    for(int i = 0; i < size; i++)
        employeeDataPointers[i] = &employeeData[i];

    sort(employeeDataPointers, size);

    printf("\nThe employess sorted by salary in the ascending order:\n");
    for(int i = 0; i < size; i++){
        printf("Employee %d in %s dept. with salary %.3f\n", 
                employeeDataPointers[i]->ID, 
                employeeDataPointers[i]->division, 
                employeeDataPointers[i]->salary);
    }

    return 0;
}
