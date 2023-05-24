
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

Product::Product(string name, string category, double price, int quantity, int id)
        : name(name), category(category), price(price), quantity(quantity), id(id) {}
const string &Product::getName() const {
    return name;
}
const string &Product::getCategory() const {
    return category;
}
double Product::getPrice() const {
    return price;
}
int Product::getQuantity() const {
    return quantity;
}
int Product::getId() const {
    return id;
}
void Product::setName(const string &name) {
    Product::name = name;
}
void Product::setCategory(const string &category) {
    Product::category = category;
}
void Product::setPrice(double price) {
    Product::price = price;
}
void Product::setQuantity(int quantity) {
    Product::quantity = quantity;
}
void Product::setId(int id) {
    Product::id = id;
}
void Product::display() {
    cout << "Name: " << name << endl;
    cout << "Category: " << category << endl;
    cout << "Price (in hryvnia): " << price <<endl;
    cout << "Quantity: " << quantity << endl;
    cout << "ID: " << id << endl;
}

Product::~Product() {
}