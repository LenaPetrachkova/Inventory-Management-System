//
// Created by Professional on 24.05.2023.
//

#ifndef LABA2_CLOTHES_H
#define LABA2_CLOTHES_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Product.h"
#include "Electronics.h"
using namespace std;

class Clothes : public Product{
private:
    int size;
    string color;
    string gender;
public:
    Clothes(string name, string category, double price, int quantity, int id, int size, string color, string gender);
    void setSize(int size);
    void setColor(const string &color);
    void setGender(const string &gender);
    int getSize() const;
    const string &getColor() const;
    const string &getGender() const;
    void display();
};


#endif //LABA2_CLOTHES_H
