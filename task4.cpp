#include <iostream>
#include <string>
#include "restaurant.h"
#include "eat_in_restaurant.h"
#include "delivery_restaurant.h"
using namespace std;

int main()
{
    Restaurant RA("Tony's Pepperonis", "1999");
    Restaurant* ptrRA = &RA;

    EatInRestaurant RB("Charles Entertainment Cheese", "1997", 250);
    Restaurant* ptrRB = &RB;

    DeliveryRestaurant RC("Krusty Krab", 35);
    Restaurant* ptrRC = &RC;

    Restaurant* array[3] = {ptrRA, ptrRB, ptrRC};

    for (Restaurant* restaurant : array)
    {
        restaurant->print();
    }
}