#ifndef EAT_IN_RESTAURANT_H
#define EAT_IN_RESTAURANT_H

#include "restaurant.h"

class EatInRestaurant : public Restaurant 
{
    private: 
        int maxPatrons;

    public:

        EatInRestaurant(const string& restaurantName, const string& yearEstablished, int maxPatrons)

        :
            maxPatrons(maxPatrons) {Restaurant(restaurantName, yearEstablished);}

        int getMaxPatrons() const
        {
            return maxPatrons;
        }
        
        void setMaxPatrons(int max)
        {
            maxPatrons = max;
        }

        void print() override 
        {
            cout << "Restaurant Name: " << name << endl;
            cout << "Maximum Patrons: " << maxPatrons << endl;
        }

};

#endif