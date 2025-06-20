#include "pizza.h"

#include <memory>    // For std::unique_ptr
#include <vector>    // For std::vector
#include <string>    // For std::string
#include <utility>   // For std::move
#include <iostream>  // For std::cout

#include "ingredient.h"              // For IIngredient interface
#include "pizzaIngredientFactory.h"  // For IPizzaIngredientFactory interface

Pizza::Pizza(const std::string& name, std::unique_ptr<IPizzaIngredientFactory> factory)
    : m_name{ name }, m_factory{ std::move(factory) }
{
    m_ingredients.resize(3);
    m_ingredients[0] = m_factory->createCheese();
    m_ingredients[1] = m_factory->createDough();
    m_ingredients[2] = m_factory->createSauce();
}

void Pizza::prepare() const {
    std::cout << "Preparing " << m_name << "...\n";
}

void Pizza::bake() const {
    std::cout << "Baking at 220°C for 20 minutes.\n";
}

void Pizza::cut() const {
    std::cout << "Cutting pizza into diagonal slices.\n";
}

void Pizza::box() const {
    std::cout << "Placing pizza in official box.\n";
}

void Pizza::describe() const {
    std::cout << "🍕 " << m_name << " with:\n";
    if (m_ingredients[0])
        std::cout << "  • Dough: "  << m_ingredients[0]->getDescription() << "\n";
    if (m_ingredients[1])
        std::cout << "  • Sauce: "  << m_ingredients[1]->getDescription() << "\n";
    if (m_ingredients[2])
        std::cout << "  • Cheese: " << m_ingredients[2]->getDescription() << "\n";
}
