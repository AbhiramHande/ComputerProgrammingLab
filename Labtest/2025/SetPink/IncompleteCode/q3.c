#include <stdio.h>
#include <string.h>

// Structure to hold student information
typedef struct {
    char name[50];
    int ID;
    int Math_Marks;
    int Science_Marks;
} Student;

// Function to calculate the average Math_Marks for a section
float calculateSectionAverage(Student section[]) {
  


}

// Function to create an array of pointers to student arrays (sections)
void createPointerArray(Student *SectionArr[], Student *s1, Student *s2, Student *s3, Student *s4, 
                        Student *s5, Student *s6, Student *s7, Student *s8, Student *s9, Student *s10) {
    


}

// Function to sort the pointer array SectionArr, based on average Math_Marks using Selection Sort
void sortPointerArray(Student *SectionArr[], int n) {
    


}

int main() {
    // Statically allocated student arrays for 10 sections
    Student s1[4] = {{"Alice", 101, 85, 90}, {"Bob", 102, 75, 80}, {"Charlie", 103, 90, 85}, {"Diana", 104, 88, 91}};
    Student s2[4] = {{"Ethan", 201, 70, 65}, {"Fiona", 202, 88, 92}, {"George", 203, 78, 85}, {"Hannah", 204, 82, 87}};
    Student s3[4] = {{"Ivy", 301, 92, 89}, {"Jack", 302, 60, 68}, {"Kylie", 303, 80, 82}, {"Leo", 304, 85, 90}};
    Student s4[4] = {{"Mona", 401, 76, 79}, {"Nate", 402, 85, 88}, {"Olivia", 403, 67, 70}, {"Paul", 404, 90, 85}};
    Student s5[4] = {{"Quincy", 501, 88, 85}, {"Rachel", 502, 90, 92}, {"Steve", 503, 84, 87}, {"Tina", 504, 78, 82}};
    Student s6[4] = {{"Uma", 601, 65, 70}, {"Victor", 602, 95, 98}, {"Wendy", 603, 80, 85}, {"Xander", 604, 72, 77}};
    Student s7[4] = {{"Yasmine", 701, 70, 75}, {"Zane", 702, 82, 88}, {"Alice", 703, 91, 93}, {"Brian", 704, 88, 85}};
    Student s8[4] = {{"Cathy", 801, 78, 80}, {"David", 802, 85, 87}, {"Eva", 803, 90, 85}, {"Frank", 804, 74, 79}};
    Student s9[4] = {{"Grace", 901, 92, 95}, {"Hank", 902, 88, 90}, {"Ivy", 903, 85, 89}, {"Jack", 904, 89, 91}};
    Student s10[4] = {{"Laura", 1001, 78, 75}, {"Mike", 1002, 80, 82}, {"Nina", 1003, 84, 86}, {"Oscar", 1004, 75, 78}};

    // Array of pointers to student arrays (sections)
    Student *SectionArr[10];

    // Create pointer array
    createPointerArray(SectionArr, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10);

    printf("Printing Average Math Marks of Sections in SectionArr before it was sorted:\n");
    for (int i = 0; i < 10; i++) {
        printf("SectionArr[%d]: %.2f\n", i + 1, calculateSectionAverage(SectionArr[i]));
    }

    // Sort based on average Math_Marks
    sortPointerArray(SectionArr, 10);

    // Display average Math_Marks after sorting
    printf("Printing Average Math Marks of Sections in Sorted SectionArr:\n");
    for (int i = 0; i < 10; i++) {
        printf("SectionArr[%d]: %.2f\n", i + 1, calculateSectionAverage(SectionArr[i]));
    }

    return 0;
}
