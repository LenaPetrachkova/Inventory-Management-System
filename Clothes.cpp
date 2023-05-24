//
// Created by Professional on 24.05.2023.
//
#include <iostream>
#include <string>
#include "Product.h"
#include "Clothes.h"
using namespace std;

Clothes::Clothes(string name, string category, double price, int quantity, int id, int size, string color,
                 string gender)
        : Product(name, category, price, quantity, id), size(size), color(color), gender(gender) {}

void Clothes::setSize(int size) {
    Clothes::size = size;
}

void Clothes::setColor(const string &color) {
    Clothes::color = color;
}

void Clothes::setGender(const string &gender) {
    Clothes::gender = gender;
}

const string &Clothes::getColor() const {
    return color;
}

int Clothes::getSize() const {
    return size;
}

const string &Clothes::getGender() const {
    return gender;
}

void Clothes::display() {
    Product::display();
    cout << "Size: " << size << endl;
    cout << "Color: " << color << endl;
    cout << "Gender: " << gender << endl;
}
