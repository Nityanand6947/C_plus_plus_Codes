/*
-Single Responsibility Principle(SRP) states that a class should have only one responsibility
-Or class should have only one reason to change
-When a class has only one responsibility, it become easier to change and test.If a class has multiple resposibilities
changing one responsibility may impact others and more testing efforts will be required in.
 */

#include <iostream>
#include <string>

// Class for baking bread
class BreadBaker {
public:
    void bakeBread() {
        std::cout << "Baking high-quality bread..." << std::endl;
    }
};

// Class for managing inventory
class InventoryManager {
public:
    void manageInventory() {
        std::cout << "Managing inventory..." << std::endl;
    }
};

// Class for ordering supplies
class SupplyOrder {
public:
    void orderSupplies() {
        std::cout << "Ordering supplies..." << std::endl;
    }
};

// Class for serving customers
class CustomerService {
public:
    void serveCustomer() {
        std::cout << "Serving customers..." << std::endl;
    }
};

// Class for cleaning the bakery
class BakeryCleaner {
public:
    void cleanBakery() {
        std::cout << "Cleaning the bakery..." << std::endl;
    }
};

int main() {
    BreadBaker baker;
    InventoryManager inventoryManager;
    SupplyOrder supplyOrder;
    CustomerService customerService;
    BakeryCleaner cleaner;

    // Each class focuses on its specific responsibility
    baker.bakeBread();
    inventoryManager.manageInventory();
    supplyOrder.orderSupplies();
    customerService.serveCustomer();
    cleaner.cleanBakery();

    return 0;
}
