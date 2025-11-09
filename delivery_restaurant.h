#ifndef DELIVERY_RESTAURANT_H
#define DELIVERY_RESTAURANT_H

#include "restaurant.h"

class DeliveryRestaurant : public Restaurant {
private:
    int maxDistance;
public:
    DeliveryRestaurant();

    DeliveryRestaurant(const string& name, int maximumDistance) :
        maxDistance(maximumDistance),
        Restaurant(name)
    {}

    DeliveryRestaurant(DeliveryRestaurant& other) :
        maxDistance(other.getMaxDistance())
    {
        Restaurant(other.name, other.year);
    }

    DeliveryRestaurant(DeliveryRestaurant&& other) :
        maxDistance(std::move(other.getMaxDistance()))
    {
        Restaurant(std::move(other.name), std::move(other.year));
    }

    int getMaxDistance() { return maxDistance; }

    DeliveryRestaurant setMaxDistance(int n) {
        maxDistance = n;
        return *this;
    }

    void print() override {
        cout << "Name: " << name << "\nMax Distance (Km): " << maxDistance << endl;
    }
};

#endif