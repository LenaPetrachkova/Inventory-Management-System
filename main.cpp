#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
#include "Food.h"
#include "Electronics.h"
#include "Clothes.h"
#include "Furniture.h"
#include "Inventory.h"
using namespace std;

// Function to display the menu
void displayMenu() {
    cout << endl;
    cout << "This is the Inventory Management System" << endl;
    cout << "Here you can see the list of commands available in this system:" << endl;
    cout << endl;
    cout << "1. Display all products" << endl;
    cout << "2. Add product" << endl;
    cout << "3. Remove product" << endl;
    cout << "4. Search product by name" << endl;
    cout << "5. Search product by category" << endl;
    cout << "6. Search product by ID" << endl;
    cout << "7. Sort products by price" << endl;
    cout << "8. Exit" << endl;
    cout << "To choose one command, please enter enter a number from 1 to 8:  ";
    cout << endl;
}

void dataTypeError() {
    cout << "It seems that you entered incorrect type of data" << endl;
    cout << "Please check it and enter the right value:" << endl;
}

void clearCin() {
    cin.clear();
    cin.ignore(36366, '\n');
}

int main() {
    Inventory inventory;
    Food milk("Milk", "Food", 56.50, 10, 1, "30.05.2023");
    Electronics laptop("Laptop", "Electronics", 20000, 3, 2, "Asus");
    Clothes coat("Coat", "Clothes", 9890, 3, 3, 54, "Blue", "Man");
    Furniture sofa("Sofa", "Furniture", 15000, 10, 4, "Velvet", "New");
    inventory.addProduct (&milk);
    inventory.addProduct (&laptop);
    inventory.addProduct (&coat);
    inventory.addProduct (&sofa);

    int choice;
    do {
        displayMenu();
        cin >> choice;
        if (cin.fail()) {
            dataTypeError();
            clearCin();
            cin >> choice;
        }

        switch (choice) {
            case 1: {
                cout << "All Products in the Inventory:" << endl;
                inventory.displayAllProducts();
                break;
            }

            // Add product to inventory
            case 2: {
                string name;
                string category;
                double price;
                int quantity;
                int id;

                cout << "Enter product details: " << endl;
                cout << "Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Category: ";
                getline(cin, category);
                cout << "Price: ";
                cin >> price;
                if (cin.fail()) {
                    dataTypeError();
                    clearCin();
                    cin >> price;
                }
                cout << "Quantity: ";
                cin >> quantity;
                if (cin.fail()) {
                    dataTypeError();
                    clearCin();
                    cin >> quantity;
                }
                cout << "ID: ";
                cin >> id;
                if (cin.fail()) {
                    dataTypeError();
                    clearCin();
                    cin >> id;
                }
                Product product(name, category, price, quantity, id);
                inventory.addProduct(&product);
                cout << "Product added successfully!";
                break;
            }

            // Remove product from inventory by ID:
            case 3: {
                int id;
                cout << "Enter the ID of the product to remove: ";
                cin >> id;
                if (cin.fail()) {
                    dataTypeError();
                    clearCin();
                    cin >> id;
                }
                if (inventory.removeProductById(id)) {
                    cout << "Product deleted from the inventory." << endl;
                }
                else {
                    cout << "Product not found in the inventory." << endl;
                }
                break;
            }

            // Search product by name:
            case 4: {
                string name;
                cout << "Enter the name of the product to search: ";
                cin.ignore();
                getline(cin, name);

                vector<Product*> result = inventory.searchByName(name);
                if (!result.empty()) {
                    cout << "Search Results: " << endl;
                    for (Product* product : result) {
                        product->display();
                        cout << endl;
                    }
                } else {
                    cout << "No products found with the given name." << endl;
                }
                break;
            }

            // Search product by category:
            case 5: {
                string category;
                cout << "Enter the category of the product to search: ";
                cin.ignore();
                getline(cin, category);

                vector<Product*> result = inventory.searchByCategory(category);
                if (!result.empty()) {
                    cout << "Search Results: " << endl;
                    for (Product* product : result) {
                        product->display();
                        cout << endl;
                    }
                } else {
                    cout << "No products found in the given category." << endl;
                }
                break;
            }
                // Search product by ID:
            case 6: {
                int id;
                cout << "Enter the ID of the product to search: ";
                cin >> id;
                if (cin.fail()) {
                    dataTypeError();
                    clearCin();
                    cin >> id;
                }

                Product* product = inventory.searchById(id);
                if (product != nullptr) {
                    cout << "Product found:" << endl;
                    product->display();
                    cout << endl;
                } else {
                    cout << "Product not found with the given ID." << endl;
                }
                break;
            }

            // Sort products by price
            case 7: {

                int sortChoice;
                cout << "Sort products by price:" << endl;
                cout << "1. Ascending order" << endl;
                cout << "2. Descending order" << endl;
                cout << "Enter your choice: ";
                cin >> sortChoice;
                if (cin.fail()) {
                    dataTypeError();
                    clearCin();
                    cin >> sortChoice;
                }

                switch (sortChoice) {
                    case 1: {
                        inventory.sortProductsByPrice(true);  // Ascending order
                        cout << "Products sorted by price in ascending order." << endl;
                        break;
                    }
                    case 2: {
                        inventory.sortProductsByPrice(false);  // Descending order
                        cout << "Products sorted by price in descending order." << endl;
                        break;
                    }
                    default:
                        cout << "Invalid choice. Products will remain unsorted." << endl;
                        break;
                }
                break;
            }

            // Exit
            case 8: {
                cout << "Leaving the Inventory Management System. Goodbye!" << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    } while (choice != 8);
    return 0;
}
