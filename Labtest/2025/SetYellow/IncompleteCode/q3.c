#include <stdio.h>
#include <string.h>

#define NUM_SHELVES 10
#define BOOKS_PER_SHELF 4

// Book structure
typedef struct {
    char title[50];
    int bookID;
    int publicationYear;
    int price;
} Book;

// (a) Create Pointer Array
void createPointerArray(Book* shelfArr[], Book b1[], Book b2[], Book b3[], Book b4[], Book b5[], 
                        Book b6[], Book b7[], Book b8[], Book b9[], Book b10[]) {
    

}

// (b) Find minimum price on a shelf
int findMinPriceBook(Book shelf[]) {
    


}

// (c) Sort shelfArr based on min price using selection sort
void sortPointerArray(Book* shelfArr[]) {
    

    
}

int main() {
    // Statically allocated book records
    Book b1[4] = {{"BookA1", 101, 2001, 250}, {"BookA2", 102, 2005, 200}, {"BookA3", 103, 2010, 300}, {"BookA4", 104, 2015, 150}};
    Book b2[4] = {{"BookB1", 201, 2003, 400}, {"BookB2", 202, 2008, 350}, {"BookB3", 203, 2012, 450}, {"BookB4", 204, 2018, 300}};
    Book b3[4] = {{"BookC1", 301, 2002, 500}, {"BookC2", 302, 2006, 480}, {"BookC3", 303, 2011, 470}, {"BookC4", 304, 2016, 460}};
    Book b4[4] = {{"BookD1", 401, 2004, 210}, {"BookD2", 402, 2009, 190}, {"BookD3", 403, 2013, 180}, {"BookD4", 404, 2019, 220}};
    Book b5[4] = {{"BookE1", 501, 2001, 130}, {"BookE2", 502, 2005, 140}, {"BookE3", 503, 2010, 160}, {"BookE4", 504, 2015, 170}};
    Book b6[4] = {{"BookF1", 601, 2002, 800}, {"BookF2", 602, 2007, 750}, {"BookF3", 603, 2011, 720}, {"BookF4", 604, 2016, 760}};
    Book b7[4] = {{"BookG1", 701, 2003, 100}, {"BookG2", 702, 2008, 110}, {"BookG3", 703, 2012, 120}, {"BookG4", 704, 2017, 90}};
    Book b8[4] = {{"BookH1", 801, 2004, 330}, {"BookH2", 802, 2009, 310}, {"BookH3", 803, 2013, 320}, {"BookH4", 804, 2019, 340}};
    Book b9[4] = {{"BookI1", 901, 2000, 280}, {"BookI2", 902, 2005, 260}, {"BookI3", 903, 2010, 290}, {"BookI4", 904, 2015, 270}};
    Book b10[4] = {{"BookJ1", 1001, 2001, 600}, {"BookJ2", 1002, 2006, 550}, {"BookJ3", 1003, 2011, 580}, {"BookJ4", 1004, 2016, 590}};

    Book* shelfArr[NUM_SHELVES];

    createPointerArray(shelfArr, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10);

    printf("Minimum prices before sorting:\n");
    for (int i = 0; i < NUM_SHELVES; i++) {
        int minPrice = findMinPriceBook(shelfArr[i]);
        printf("Shelf %d min price: %d\n", i + 1, minPrice);
    }

    sortPointerArray(shelfArr);

    printf("\nMinimum prices after sorting:\n");
    for (int i = 0; i < NUM_SHELVES; i++) {
        int minPrice = findMinPriceBook(shelfArr[i]);
        printf("Shelf %d min price: %d\n", i + 1, minPrice);
    }

    return 0;
}
