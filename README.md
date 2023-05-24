# Inventory Management System

This program implements a simple inventory management system to manage a collection of products in a store. The program consists of 13 files: 6 header files (.hpp), 6 source files (.cpp) for classes, and 1 main source file (.cpp) where program execution begins.
In the main function, the program starts by creating an instance of the `Inventory` class, which represents the inventory management system. This instance is created using the default constructor of the `Inventory` class.

## Classes

### Product

The `Product` class represents a generic product and provides the following information and operations:

- Attributes:
  - `name`: The name of the product.
  - `category`: The category or type of the product.
  - `price`: The price of the product in hryvnia.
  - `quantity`: The quantity of the product in stock.
  - `id`: The unique identifier of the product.

- Methods:
  - `getName()`: Get the name of the product.
  - `getCategory()`: Get the category of the product.
  - `getPrice()`: Get the price of the product.
  - `getQuantity()`: Get the quantity of the product.
  - `getId()`: Get the ID of the product.
  - `setName()`: Set the name of the product.
  - `setCategory()`: Set the category of the product.
  - `setPrice()`: Set the price of the product.
  - `setQuantity()`: Set the quantity of the product.
  - `setId()`: Set the ID of the product.
  - `display()`: Display the details of the product.

### Food

The `Food` class extends the `Product` class and represents a food product. It adds the following attribute:

- `expiryDate`: The expiry date of the food product.

It provides additional methods to get and set the expiry date, and overrides the `display()` method to include the expiry date in the product details.

### Electronics

The `Electronics` class extends the `Product` class and represents an electronics product. It adds the following attribute:

- `brand`: The brand of the electronics product.

It provides additional methods to get and set the brand, and overrides the `display()` method to include the brand in the product details.

### Clothes

The `Clothes` class extends the `Product` class and represents a clothing product. It adds the following attributes:

- `size`: The size of the clothing product.
- `color`: The color of the clothing product.
- `gender`: The target gender for the clothing product.

It provides additional methods to get and set the size, color, and gender, and overrides the `display()` method to include these details in the product information.

### Furniture

The `Furniture` class extends the `Product` class and represents a furniture product. It adds the following attributes:

- `material`: The material used in the furniture product.
- `condition`: The condition or state of the furniture product.

It provides additional methods to get and set the material and condition, and overrides the `display()` method to include these details in the product information.

### Inventory

The `Inventory` class is responsible for managing the collection of products in the inventory. It provides the following functionality:

- Adding a product to the inventory.
- Removing a product from the inventory based on its ID.
- Searching for products by name, category, or ID.
- Displaying all products in the inventory.
- Sorting products in the inventory by price in ascending or descending order.

## Functionality and User Interaction

The program allows users to perform various operations on the inventory of products. Here's a brief overview of the functionality and user interaction:

1. **Adding a Product**: Users can add a new product to the inventory by providing the necessary details such as name, category, price, quantity, and any additional attributes specific to the product type (e.g., expiry date, brand, size, color, etc.). The product is then added to the inventory using the `addProduct()` method of the `Inventory` class.

2. **Removing a Product**: Users can remove a product from the inventory by specifying its ID. The program will search for the product with the given ID and remove it from the inventory using the `removeProductById()` method of the `Inventory` class.

3. **Searching for Products**: Users can search for products in the inventory based on different criteria such as name, category, or ID. The program provides the `searchByName()`, `searchByCategory()`, and `searchById()` methods in the `Inventory` class, which return a list of products matching the specified criteria.

4. **Displaying All Products**: Users can view all the products in the inventory along with their details. The program uses the `displayAllProducts()` method of the `Inventory` class to show the information of all the products.

5. **Sorting Products by Price**: Users can sort the products in the inventory by their price in either ascending or descending order. The `sortProductsByPrice()` method of the `Inventory` class is used to perform the sorting based on the user's choice.

These operations can be performed through a user interface or by invoking the appropriate methods directly in the code.

