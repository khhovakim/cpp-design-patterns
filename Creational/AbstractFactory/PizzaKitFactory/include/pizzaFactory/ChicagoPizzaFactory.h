#pragma once // __ChicagoPizzaFactory__

# include <memory>  // For std::unique_ptr, std::make_unique

# include "sauce.h"                   // For ISauce  interface
# include "dough.h"                   // For IDough  interface
# include "cheese.h"                  // For ICheese interface
# include "pizzaIngredientFactory.h"  // For IPizzaIngredientFactory interface

# include "thickCrustDough.h"   // For ThickCrustDough
# include "plumTomatoSauce.h"   // For PlumTomatoSauce
# include "mozzarellaCheese.h"  // For MozzarellaCheese

class ChicagoPizzaFactory : public IPizzaIngredientFactory {
public:
    ~ChicagoPizzaFactory() override = default;

public:
    std::unique_ptr<ICheese> createCheese() const override {
        return std::make_unique<MozzarellaCheese>();
    }

    std::unique_ptr<ISauce>  createSauce()  const override {
        return std::make_unique<PlumTomatoSauce>();
    }

    std::unique_ptr<IDough>  createDough()  const override {
        return std::make_unique<ThickCrustDough>();
    }

};
