#ifndef BOOK_H
#define BOOK_H

#include <stdio.h>

typedef enum shelf{
    Shelf1 = 1,
    Shelf2 = 2,
    Shelf3 = 3,
    Shelf4 = 4
} SHELF;

typedef struct book{
    int ID;    
    SHELF shelfNum;
    float price;
} BOOK;

BOOK newBook(int ID, SHELF shelfNum, float price);
void printBook(BOOK book1);

#endif