#ifndef PIZZA_MENU_H
#define PIZZA_MENU_H

#include "pizza.h"

#define MAX_SIZE 50

extern PIZZA pizzaMenu[MAX_SIZE];
extern int count, total;

// This function should take an input parameter of type struct pizza (typdefed as PIZZA)
// and take it to the pizzaMenu array at position count. Then, count should be incremented
void addPizzaToMenu(PIZZA pizza1);


// This function should print all pizzas that are added to the pizzaMenu array
// It should use the printPizza() function defined in "pizza.h"
void printPizzaMenu();


// This function should sort the pizzaMenu array as per the price
void sortPizzaMenuOnPrice();

#endif
