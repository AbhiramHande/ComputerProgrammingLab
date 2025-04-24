#include <stdio.h>
#include <string.h>

// Define the structure for student record
struct Student {
    char name[50];
    int id;
    int math_marks;
    int science_marks;
};

// (a) Function to sort records by Science_Marks using Selection Sort
void sortRecords(struct Student arr[], int n) {
    

    
}

// (b) Function to search record by Science_Marks using Binary Search
void searchRecord(struct Student arr[], int n, int target) {
    

    
}

int main() {
    struct Student students[20] = {
        {"Alice", 101, 78, 85},
        {"Bob", 102, 92, 79},
        {"Charlie", 103, 65, 88},
        {"David", 104, 80, 75},
        {"Eva", 105, 55, 90},
        {"Frank", 106, 83, 82},
        {"Grace", 107, 72, 91},
        {"Hannah", 108, 60, 68},
        {"Ian", 109, 90, 72},
        {"Jane", 110, 69, 80},
        {"Kyle", 111, 74, 86},
        {"Liam", 112, 59, 77},
        {"Mona", 113, 88, 89},
        {"Nora", 114, 67, 84},
        {"Oscar", 115, 81, 76},
        {"Paul", 116, 73, 65},
        {"Queen", 117, 93, 70},
        {"Rita", 118, 79, 95},
        {"Steve", 119, 70, 66},
        {"Tina", 120, 77, 87}
    };

    int n = 20;

    // (a) Sort records by Science Marks
    sortRecords(students, n);

    // Print sorted array in main
    printf("Sorted Records by Science Marks (Ascending Order):\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, ID: %d, Math: %d, Science: %d\n",
               students[i].name, students[i].id,
               students[i].math_marks, students[i].science_marks);
    }

    // (b) Search record by Science Marks
    int target = 88;
    searchRecord(students, n, target);

    return 0;
}