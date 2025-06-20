#pragma once // __I_Cheese__

# include "ingredient.h"  // For IIngredient interface

class ICheese : public IIngredient {
public:
    ~ICheese() override = default;
};
