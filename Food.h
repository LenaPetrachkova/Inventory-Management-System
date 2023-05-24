
#ifndef LABA2_FOOD_H
#define LABA2_FOOD_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Product.h"
using namespace std;


class Food : public Product{
private:
    string expiryDate;
public:
    Food(string name, string category, double price, int quantity, int id, string expiryDate);
    string getExpiryDate() const;
    void setExpiryDate(string expiryDate);
    virtual void display();
};


#endif //LABA2_FOOD_H
