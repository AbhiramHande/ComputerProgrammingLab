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
    for(int i = 0; i < n; i++){
        int min_index = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j].science_marks < arr[min_index].science_marks)
                min_index = j;
        }

        struct Student temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    return;
}

// (b) Function to search record by Science_Marks using Binary Search
void searchRecord(struct Student arr[], int n, int target) {
    int low = 0, high = n - 1;
    int target_index = -1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid].science_marks == target){
            target_index = mid;
            break;
        }
        else if(arr[mid].science_marks < target)
            low =  mid + 1;
        else
            high = mid - 1;
    }

    if(target_index == -1)
        printf("Record not found.\n");
    else{
        printf("Record found:\n");
        printf("Name: %s, ID: %d, Math: %d, Science: %d\n",
            arr[target_index].name, arr[target_index].id,
            arr[target_index].math_marks, arr[target_index].science_marks);
    }
    
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