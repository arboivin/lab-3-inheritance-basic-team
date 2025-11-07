#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <string>
#include <iostream>

using namespace std;

class Restaurant {
public:
    Restaurant();
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