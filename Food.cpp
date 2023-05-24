
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Product.h"
#include "Food.h"
using namespace std;

Food::Food(string name, string category, double price, int quantity, int id, string expiryDate)
        : Product(name, category, price, quantity, id), expiryDate(expiryDate) {}

string Food::getExpiryDate() const {
    return expiryDate;
}

void Food::setExpiryDate(string expiryDate) {
    this->expiryDate = expiryDate;
}
void Food::display() {
    Product::display();
    cout << "Expiry Date: " << expiryDate << endl;
}
