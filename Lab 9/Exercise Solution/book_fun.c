#include "book_def.h"

BOOK newBook(int ID, SHELF shelfNum, float price) {
    BOOK book1;

    book1.ID = ID;
    book1.shelfNum = shelfNum;
    book1.price = price;

    return book1;
}

void printBook(BOOK book1) {
   printf("Book ID: %d, Shelf: %d, Price: %f\n", book1.ID, book1.shelfNum, book1.price);
   return;
}