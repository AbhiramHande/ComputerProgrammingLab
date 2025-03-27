#include "pizza.h"

PIZZA newPizza(int pid, TYPE pizzaType, float price, BASE pizzaBase) {
    PIZZA piz;
    piz.pid = pid;
    piz.pizzaBase = pizzaBase;
    piz.pizzaType = pizzaType;
    piz.price = price;

    return piz;
}

void printPizza(PIZZA pizza1) {
    printf("ID: %d\n", pizza1.pid);
    printf("Type: %d\n", pizza1.pizzaType);
    printf("Price: %f\n", pizza1.price);
    printf("Base: %d\n", pizza1.pizzaBase);
}
