//
// Created by Professional on 24.05.2023.
//

#ifndef LABA2_ELECTRONICS_H
#define LABA2_ELECTRONICS_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Product.h"
#include "Electronics.h"
using namespace std;

class Electronics : public Product {
private:
    string brand;
public:
    Electronics(string name, string category, double price, int quantity, int id, string brand);
    string getBrand() const;
    void setBrand(string brand);
    void display();
};


#endif //LABA2_ELECTRONICS_H
