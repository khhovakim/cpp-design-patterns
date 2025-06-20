#include <memory>    // For std::unique_ptr, std::make_unique
#include <iostream>  // For std::cin

#include "pizza.h"                // For Pizza
#include "NYPizzaFactory.h"       // For NYPizzaFactory
#include "ChicagoPizzaFactory.h"  // For ChicagoPizzaFactory

int main() {
    std::cout << "🍕 Welcome to Abstract Pizza Factory!\n";
    std::cout << "Choose your style:\n";
    std::cout << "1. New York Style\n";
    std::cout << "2. Chicago Style\n";
    std::cout << "Enter choice: ";

    int choice;
    std::cin >> choice;

    std::unique_ptr<Pizza> pizza;

    switch (choice) {
        case 1:
            pizza = std::make_unique<Pizza>(
                "New York Style Pizza", std::make_unique<NYPizzaFactory>());
            break;
        case 2:
            pizza = std::make_unique<Pizza>(
                "Chicago Style Pizza", std::make_unique<ChicagoPizzaFactory>());
            break;
        default:
            std::cout << "❌ Invalid choice.\n";
            return 1;
    }

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    pizza->describe();

    return 0;
}
