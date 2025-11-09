#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <string>
#include <iostream>

using namespace std;

class Restaurant {
public:
    Restaurant();

    Restaurant(const string& restaurantName) :
        name(restaurantName),
        year("")
    {}

    Restaurant(const string& restaurantName, const string& yearEstablished) :
        name(restaurantName),
        year(yearEstablished)
    {}

    Restaurant(Restaurant& other) :
        name(other.name),
        year(other.year)
    {}

    Restaurant(Restaurant&& other) :
        name(std::move(other.name)),
        year(std::move(other.year))
    {}

    string getName() { return name; }

    Restaurant setName(string n) {
        name = n;
        return *this;
    }

    string getYear() { return year; }

    virtual void print() {
        cout << "Name: " << name << "\nYear established: " << name << endl;
    }

protected:
    string name;
    string year;
};

#endif