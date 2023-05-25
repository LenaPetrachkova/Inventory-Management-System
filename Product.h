//
// Created by Professional on 24.05.2023.
//

#ifndef LABA2_PRODUCT_H
#define LABA2_PRODUCT_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Product {
protected:
    string name;
    string category;
    double price;
    int quantity;
    int id;
public:
    Product(string name, string category, double price, int quantity, int id);
    const string &getName() const;
    const string &getCategory() const;
    double getPrice() const;
    int getQuantity() const;
    int getId() const;
    void setName(const string &name);
    void setCategory(const string &category);
    void setPrice(double price);
    void setQuantity(int quantity);
    void setId(int id);
    virtual void display() ;
    
    // Function to compare products based on price:
    bool operator<(const Product &a);
    
    ~Product();
};


#endif //LABA2_PRODUCT_H
