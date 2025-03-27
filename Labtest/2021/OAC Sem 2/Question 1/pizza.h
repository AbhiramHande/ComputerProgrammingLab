#ifndef PIZZA_H
#define PIZZA_H

#include <stdio.h>

typedef enum type{Type1=1,Type2=2,Type3=3,Type4=4} TYPE;
typedef enum base{Base1=1,Base2=2,Base3=3} BASE;

int id, ty, bs;
float pr;

typedef struct pizza{
    int pid;
    TYPE pizzaType;
    float price;
    BASE pizzaBase;
} PIZZA;

// this function should create a new variable of the type struct pizza (typdefed as PIZZA) and return it.
PIZZA newPizza(int pid, TYPE pizzaType, float price, BASE pizzaBase);

// this function should print the members of pizza1 (passed as parameter)
void printPizza(PIZZA  pizza1);

#endif
