#include <stdio.h>
#include <stdlib.h>

struct Pizza{
        char size_pizza[100];
    };

struct Toppings{
        char pizza_toppings[100];
    };

int main()
{
    printf("Welcome to the Pizza Shop!\n");

    struct Pizza Small;
    struct Pizza Medium;
    struct Pizza Large;

    strcpy(Small.size_pizza,"Small\n");
    strcpy(Medium.size_pizza,"Medium\n");
    strcpy(Large.size_pizza,"Large\n");

    printf("The available size of pizza are:\n");
    printf(Small.size_pizza);
    printf(Medium.size_pizza);
    printf(Large.size_pizza);

    printf("All pizzas come on a tomato base, and will have the topping cheese by default, at no extra cost.But for extra toppings you will be charged $1 for each toppings. Maximum four toppings can be added. Other toppings are:\n");

    struct Toppings Bacon;
    struct Toppings Olives;
    struct Toppings Ham;
    struct Toppings Pineapples;
    struct Toppings Mushroom;
    struct Toppings Anchovies;

    strcpy(Bacon.pizza_toppings,"Bacon\n");
    strcpy(Olives.pizza_toppings,"Olives\n");
    strcpy(Ham.pizza_toppings,"Ham\n");
    strcpy(Pineapples.pizza_toppings,"Pineapple\n");
    strcpy(Mushroom.pizza_toppings,"Mushroom\n");
    strcpy(Anchovies.pizza_toppings,"Anchovies\n");

    printf(Bacon.pizza_toppings);
    printf(Olives.pizza_toppings);
    printf(Ham.pizza_toppings);
    printf(Pineapples.pizza_toppings);
    printf(Mushroom.pizza_toppings);
    printf(Anchovies.pizza_toppings);

    int num_pizza[50];
    printf("Please enter the number of pizza you want to order:");
    scanf("%d", &num_pizza);

    char size_pizza[100];
    printf("Which size would you prefer?");
    scanf("%s", size_pizza);



    return 0;
}
