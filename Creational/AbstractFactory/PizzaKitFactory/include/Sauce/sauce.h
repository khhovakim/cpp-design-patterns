#pragma once // __I_Sauce__

# include "ingredient.h"  // For IIngredient interface

class ISauce : public IIngredient {
public:
    ~ISauce() override = default;
};
