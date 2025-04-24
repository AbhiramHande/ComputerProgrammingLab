#include <stdio.h>

#define SIZE 20
#define TITLE_LEN 100

// Define the structure for a book record
typedef struct {
    char title[TITLE_LEN];
    int bookID;
    int publicationYear;
    int edition;
} Book;

// (a) Function to sort records by publication year using Selection Sort
void sortRecordsByYear(Book arr[], int n) {
    


}

// (b) Function to print unique publication years
void printUniqueYears(Book arr[], int n) {
    

    
}

// Main function to test everything
int main() {
    Book books[SIZE] = {
        {"Book A", 101, 2005, 1},
        {"Book B", 102, 2010, 2},
        {"Book C", 103, 2005, 3},
        {"Book D", 104, 2015, 1},
        {"Book E", 105, 2010, 2},
        {"Book F", 106, 2012, 1},
        {"Book G", 107, 2018, 2},
        {"Book H", 108, 2020, 1},
        {"Book I", 109, 2001, 1},
        {"Book J", 110, 2003, 1},
        {"Book K", 111, 2012, 2},
        {"Book L", 112, 2014, 1},
        {"Book M", 113, 2015, 2},
        {"Book N", 114, 2018, 1},
        {"Book O", 115, 2021, 1},
        {"Book P", 116, 2023, 1},
        {"Book Q", 117, 2020, 2},
        {"Book R", 118, 2001, 2},
        {"Book S", 119, 2003, 2},
        {"Book T", 120, 2022, 1}
    };

    sortRecordsByYear(books, SIZE);
    printUniqueYears(books, SIZE);

    return 0;
}
