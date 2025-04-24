#include <stdio.h>
#include <string.h>

// Structure to hold student information
typedef struct {
    char name[50];
    int ID;
    int Math_Marks;
    int Science_Marks;
} Student;

// Function to sort and display student records in decreasing order of Math_Marks using Selection Sort
void sortRecords(Student students[], int n) {
    


}

// Function to perform binary search and print the search result
void searchRecord(Student students[], int n, int target_marks) {
   


}

int main() {
    // 20 student records
    Student students[20] = {
        {"Alice", 101, 85, 90}, {"Bob", 102, 78, 88}, {"Charlie", 103, 92, 85},
        {"David", 104, 88, 91}, {"Eva", 105, 75, 89}, {"Frank", 106, 95, 80},
        {"Grace", 107, 82, 84}, {"Hank", 108, 76, 78}, {"Ivy", 109, 91, 83},
        {"Jack", 110, 79, 86}, {"Kathy", 111, 87, 77}, {"Leo", 112, 90, 92},
        {"Mona", 113, 84, 79}, {"Nick", 114, 77, 85}, {"Olivia", 115, 93, 88},
        {"Paul", 116, 89, 90}, {"Quincy", 117, 72, 78}, {"Rachel", 118, 86, 84},
        {"Steve", 119, 80, 83}, {"Tina", 120, 88, 87}
    };

    int n = 20; // Number of students

    // Sort and display the student records
    sortRecords(students, n);

    // Search for a student with a specific Math mark
    int target_marks = 88;
    searchRecord(students, n, target_marks);

    return 0;
}