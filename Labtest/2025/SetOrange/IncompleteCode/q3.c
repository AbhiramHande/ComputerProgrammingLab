#include <stdio.h>
#include <string.h>

#define NUM_SECTIONS 10
#define STUDENTS_PER_SECTION 4

// Define the structure for student record
struct Student {
    char name[50];
    int id;
    int math_marks;
    int science_marks;
};

// Function 1: Create the pointer array SectionArr
void createPointerArray(struct Student* SectionArr[], struct Student s1[], struct Student s2[], struct Student s3[],
                        struct Student s4[], struct Student s5[], struct Student s6[], struct Student s7[],
                        struct Student s8[], struct Student s9[], struct Student s10[]) {



}

// Function 2: Calculate maximum Math Marks in a section
int calculateSectionMax(struct Student section[]) {
  


}

// Function 3: Sort SectionArr in descending order of max Math Marks using Selection Sort
void sortPointerArray(struct Student* SectionArr[]) {
    


}

int main() {
    // Create 10 statically allocated arrays of 4 students each
    struct Student s1[STUDENTS_PER_SECTION] = {
        {"A1", 1, 78, 81}, {"A2", 2, 85, 75}, {"A3", 3, 65, 90}, {"A4", 4, 90, 88}
    };
    struct Student s2[STUDENTS_PER_SECTION] = {
        {"B1", 5, 92, 85}, {"B2", 6, 87, 80}, {"B3", 7, 84, 78}, {"B4", 8, 88, 83}
    };
    struct Student s3[STUDENTS_PER_SECTION] = {
        {"C1", 9, 56, 74}, {"C2", 10, 62, 79}, {"C3", 11, 60, 77}, {"C4", 12, 70, 72}
    };
    struct Student s4[STUDENTS_PER_SECTION] = {
        {"D1", 13, 94, 91}, {"D2", 14, 91, 89}, {"D3", 15, 85, 85}, {"D4", 16, 89, 90}
    };
    struct Student s5[STUDENTS_PER_SECTION] = {
        {"E1", 17, 73, 80}, {"E2", 18, 65, 72}, {"E3", 19, 71, 76}, {"E4", 20, 68, 74}
    };
    struct Student s6[STUDENTS_PER_SECTION] = {
        {"F1", 21, 96, 88}, {"F2", 22, 94, 92}, {"F3", 23, 90, 86}, {"F4", 24, 95, 89}
    };
    struct Student s7[STUDENTS_PER_SECTION] = {
        {"G1", 25, 64, 70}, {"G2", 26, 66, 72}, {"G3", 27, 67, 68}, {"G4", 28, 69, 75}
    };
    struct Student s8[STUDENTS_PER_SECTION] = {
        {"H1", 29, 59, 60}, {"H2", 30, 55, 62}, {"H3", 31, 58, 61}, {"H4", 32, 53, 64}
    };
    struct Student s9[STUDENTS_PER_SECTION] = {
        {"I1", 33, 87, 84}, {"I2", 34, 89, 83}, {"I3", 35, 85, 81}, {"I4", 36, 88, 86}
    };
    struct Student s10[STUDENTS_PER_SECTION] = {
        {"J1", 37, 77, 79}, {"J2", 38, 75, 78}, {"J3", 39, 74, 77}, {"J4", 40, 76, 76}
    };

    // Declare pointer array to hold sections
    struct Student* SectionArr[NUM_SECTIONS];

    // Step 1: Create pointer array
    createPointerArray(SectionArr, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10);

    // Print max Math marks before sorting
    printf("Max Math Marks of Sections (Before Sorting):\n");
    for (int i = 0; i < NUM_SECTIONS; i++) {
        printf("SectionArr[%d]: %d\n", i + 1, calculateSectionMax(SectionArr[i]));
    }

    // Step 2: Sort SectionArr based on max Math_Marks
    sortPointerArray(SectionArr);

    // Print max Math marks after sorting
    printf("\nMax Math Marks of Sections (After Sorting):\n");
    for (int i = 0; i < NUM_SECTIONS; i++) {
        printf("SectionArr[%d]: %d\n", i + 1, calculateSectionMax(SectionArr[i]));
    }

    return 0;
}