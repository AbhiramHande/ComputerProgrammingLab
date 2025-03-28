#include "books_catalog.h"

BOOK booksCatalog[MAX_SIZE];
int count;

void addBookToCatalog(BOOK book1) {
    booksCatalog[count++] = book1;
    return;
}

void printBookCatalog() {
    for(int i = 0; i < count; i++)
        printBook(booksCatalog[i]);
    return;
}

void sortBookCatalogOnID() {
    for(int i = 0; i < count; i++){
        int min_index = i;
        for(int j = i+1; j < count; j++)
            if(booksCatalog[min_index].ID > booksCatalog[j].ID)
                min_index = j;

        if(min_index != i){
            BOOK temp = booksCatalog[i];
            booksCatalog[i] = booksCatalog[min_index];
            booksCatalog[min_index] = temp;
        }
    }

    return;
}