//
// Created by Professional on 24.05.2023.
//

#ifndef LABA2_FURNITURE_H
#define LABA2_FURNITURE_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Product.h"
#include "Electronics.h"
using namespace std;

class Furniture : public Product {
private:
    string material;
    string condition;
public:
    Furniture(string name, string category, double price, int quantity, int id, string material, string condition);
    const string &getMaterial() const;
    const string &getCondition() const;
    void setMaterial(const string &material);
    void setCondition(const string &condition);
    void display();

};



#endif //LABA2_FURNITURE_H
