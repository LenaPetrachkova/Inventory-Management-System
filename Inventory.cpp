
#include "Inventory.h"

// Function to add a product to the inventory
void Inventory::addProduct(Product *product) {
    products.push_back(product);
}

// Function to remove a product from the inventory based on its ID
bool Inventory::removeProductById(int id) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if ((*it)->getId() == id) {
            products.erase(it);
            return true;
        }
    }
    return false;
}

// Function to search products by name
vector<Product*> Inventory::searchByName(string name) const {
    vector<Product*> result;
    for (auto it = products.begin(); it != products.end(); ++it) {
        if ((*it)->getName() == name) {
            result.push_back(*it);
        }
    }
    return result;
}

// Function to search products by category
vector<Product*> Inventory::searchByCategory(string category) const {
    vector<Product*> result;
    for (auto it = products.begin(); it != products.end(); ++it) {
        if ((*it)->getCategory() == category) {
            result.push_back(*it);
        }
    }
    return result;
}

// Function to search products by ID
Product *Inventory::searchById(int id) const {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if ((*it)->getId() == id) {
            return *it;
        }
    }
    return nullptr;
}

// Function to display all products in the inventory
void Inventory::displayAllProducts() const {
    for (auto it = products.begin(); it != products.end(); ++it) {
        (*it)->display();
        cout << endl;
    }
}

// Function to sort products in the inventory by price in ascending or descending order
void Inventory::sortProductsByPrice(bool ascending) {
    sort(products.begin(), products.end(), [ascending](Product* a, Product* b) {
        return ascending ? a->getPrice() < b->getPrice() : a->getPrice() > b->getPrice();
    });
}
