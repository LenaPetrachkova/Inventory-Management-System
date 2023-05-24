//
// Created by Professional on 24.05.2023.
//

#include "Furniture.h"
Furniture::Furniture(string name, string category, double price, int quantity, int id, string material,
                     string condition)
        : Product(name, category, price, quantity, id), material(material), condition(condition) {}

const string &Furniture::getMaterial() const {
    return material;
}
const string &Furniture::getCondition() const {
    return condition;
}
void Furniture::setMaterial(const string &material) {
    Furniture::material = material;
}
void Furniture::setCondition(const string &condition) {
    Furniture::condition = condition;
}
void Furniture::display() {
    Product::display();
    cout << "Material: " << material << endl;
    cout << "Condition: " << condition << endl;
}