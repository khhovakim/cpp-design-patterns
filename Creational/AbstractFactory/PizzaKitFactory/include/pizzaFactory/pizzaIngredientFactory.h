#pragma once // __I_PizzaIngredientFactory__

# include <memory>  // For std::unique_ptr

# include "sauce.h"   // For ISauce  interface
# include "dough.h"   // For IDough  interface
# include "cheese.h"  // For ICheese interface

class IPizzaIngredientFactory {
public:
    virtual ~IPizzaIngredientFactory() = default;

public:
    virtual std::unique_ptr<ICheese> createCheese() const = 0;
    virtual std::unique_ptr<ISauce>  createSauce()  const = 0;
    virtual std::unique_ptr<IDough>  createDough()  const = 0;
};
