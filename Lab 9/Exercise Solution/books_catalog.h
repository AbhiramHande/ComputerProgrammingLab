#ifndef BOOKS_CATALOG_H
#define BOOKS_CATALOG_H

#include "book_def.h"

#define MAX_SIZE 100

extern BOOK booksCatalog[MAX_SIZE];
extern int count;

void addBookToCatalog(BOOK book1);
void printBookCatalog();
void sortBookCatalogOnID();

#endif