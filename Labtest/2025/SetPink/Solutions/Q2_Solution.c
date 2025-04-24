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
    for(int i = 0; i < n; i++){
        int max_index = i;
        for(int j = i + 1; j < n; j++){
            if(students[j].Math_Marks > students[max_index].Math_Marks)
                max_index = j;
        }

        Student temp = students[max_index];
        students[max_index] = students[i];
        students[i] = temp;
    }

    printf("Sorted Students by Math Marks:\n");
    for(int i = 0; i < n; i++){
        printf("Name: %s, ID: %d, Math Marks: %d, Science Marks: %d\n",
               students[i].name, students[i].ID,
               students[i].Math_Marks, students[i].Science_Marks);
    }
    printf("\n");

    return;
}

// Function to perform binary search and print the search result
void searchRecord(Student students[], int n, int target_marks) {
    int low = 0, high = n - 1;
    int target_index = -1;
    while(low <= high){
        int mid = (high + low) / 2;

        if(students[mid].Math_Marks == target_marks){
            target_index = mid;
            break;
        }
        else if(students[mid].Math_Marks < target_marks)
            high = mid - 1;
        else
            low = mid + 1;
    }

    printf("Search Result for Math Marks = %d:\n", target_marks);
    if(target_index == -1)
        printf("Element not found.\n");
    else
        printf("Name: %s, ID: %d, Math Marks: %d, Science Marks: %d\n",
                students[target_index].name, students[target_index].ID,
                students[target_index].Math_Marks, students[target_index].Science_Marks);

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