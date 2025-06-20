#pragma once // __NYPizzaFactory__

# include <memory>  // For std::unique_ptr, std::make_unique

# include "sauce.h"                   // For ISauce  interface
# include "dough.h"                   // For IDough  interface
# include "cheese.h"                  // For ICheese interface
# include "pizzaIngredientFactory.h"  // For IPizzaIngredientFactory interface

# include "thinCrustDough.h"    // For ThinCrustDough
# include "marinaraSauce.h"     // For MarinaraSauce
# include "parmigianoCheese.h"  // For ParmigianoCheese

class NYPizzaFactory : public IPizzaIngredientFactory {
public:
    ~NYPizzaFactory() override = default;

public:
    std::unique_ptr<ICheese> createCheese() const override {
        return std::make_unique<ParmigianoCheese>();
    }

    std::unique_ptr<ISauce>  createSauce()  const override {
        return std::make_unique<MarinaraSauce>();
    }

    std::unique_ptr<IDough>  createDough()  const override {
        return std::make_unique<ThinCrustDough>();
    }

};
