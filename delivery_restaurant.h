#ifndef DELIVERY_RESTAURANT_H
#define DELIVERY_RESTAURANT_H

#include "restaurant.h"

class DeliveryRestaurant : Restaurant {
private:
    int maxDistance;
public:
    DeliveryRestaurant();
    int getMaxDistance() { return maxDistance; }
    DeliveryRestaurant setMaxDistance(int n) {
        maxDistance = n;
        return *this;
    }
    void print() {
        cout << "Name: " << name << "\nMax Distance (Km): " << maxDistance << endl;
    }
};

#endif