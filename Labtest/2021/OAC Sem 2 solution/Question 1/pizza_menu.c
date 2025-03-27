#include "pizza_menu.h"

void addPizzaToMenu(PIZZA pizza1) {
    pizzaMenu[count++] = pizza1;
    return;
}

void printPizzaMenu() {
    for(int i = 0; i < count; i++){
        printf("Pizza menu %d is:\n", i + 1);
        printPizza(pizzaMenu[i]);
        printf("\n");
    }
}

void sortPizzaMenuOnPrice() {
    for(int i = 0; i < count; i++) {
        int min_index = i;
        for(int j = i + 1; j < count; j++)
            if(pizzaMenu[j].price < pizzaMenu[min_index].price)
                min_index = j;

        PIZZA temp = pizzaMenu[min_index];
        pizzaMenu[min_index] = pizzaMenu[i];
        pizzaMenu[i] = temp;
    }
}
