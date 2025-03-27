#include "pizza_menu.h"
#include "pizza.h"
#include<stdlib.h>
int main()
{
    count = 0;
    int i = 0;
    printf("Provide the number of pizzas to be entered:");
    scanf("%d", &total);

    while(i<total){
        printf("Enter ID for pizza %d\n",i+1);
        scanf("%d", &id);
        printf("Enter price for pizza %d\n", i+1);
        scanf("%f", &pr);

        // Confuguring the pizza
	// int rand() function returns a pseudo-random number in the range of 0 to RAND_MAX
	// The RAND_MAX is a constant whose default value may vary between implementations but it is granted to be at least 32767

        PIZZA pizza1 = newPizza(id, 1+rand()%5, pr, 1+rand()%3);

        // adding pizza to the menu
        addPizzaToMenu(pizza1);
        i++;
    }

    printPizzaMenu();

    sortPizzaMenuOnPrice();
    printf("\nPizza Menu after Sorting\n\n");
    printPizzaMenu();

    return 0;
}