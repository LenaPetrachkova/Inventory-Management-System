//
// Created by Professional on 24.05.2023.
//

#ifndef LABA2_INVENTORY_H
#define LABA2_INVENTORY_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Product.h"
#include "Electronics.h"
using namespace std;

class Inventory {
private:
    vector<Product*> products;
public:
    void addProduct(Product* product);
    bool removeProductById(int id);
    vector<Product*> searchByName(string name) const;
    vector<Product*> searchByCategory(string category) const;
    Product *searchById(int id) const;
    void displayAllProducts() const;
    void sortProductsByPrice(bool ascending);
};


#endif //LABA2_INVENTORY_H
