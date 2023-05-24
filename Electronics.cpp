//
// Created by Professional on 24.05.2023.
//
#include <iostream>
#include <string>
#include "Product.h"
#include "Electronics.h"
using namespace std;


Electronics::Electronics(string name, string category, double price, int quantity, int id, string brand)
        : Product(name, category, price, quantity, id), brand(brand) {}

string Electronics::getBrand() const {
    return brand;
}

void Electronics::setBrand(string brand) {
    this->brand = brand;
}

void Electronics::display() {
    Product::display();
    cout << "Brand: " << brand << endl;
}