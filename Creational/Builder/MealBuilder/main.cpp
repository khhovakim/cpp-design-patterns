#include <iostream> // For std::cout

#include "mealDirector.h"    // For MealDirector
#include "mealBuilder.h"     // For MealBuilder
#include "fullMealBuilder.h" // For FullMealBuilder
#include "kidsMealBuilder.h" // For KidsMealBuilder

int main() {
    std::cout << "🍔 Welcome to the Meal Builder!\n";
    std::cout << "Choose your meal type:\n";
    std::cout << "1. Kids Meal\n";
    std::cout << "2. Full Meal\n";
    std::cout << "Enter choice: ";

    int choice;
    std::cin >> choice;

    MealBuilder* builder;

    switch (choice) {
      case 1:
        builder = new KidsMealBuilder();
        break;
      case 2:
        builder = new FullMealBuilder();
        break;
      default:
        std::cout << "❌ Invalid choice.\n";
        return 1;
    }

    MealDirector director(builder);
    director.constructMeal();

    const Meal* meal = builder->getMeal();
    meal->show();

    delete builder; // Clean up the builder

    std::cout << "🍽️ Enjoy your meal!\n";
    return 0;
}
