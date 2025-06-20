#pragma once // __I_Dough__

# include "ingredient.h"  // For IIngredient interface

class IDough : public IIngredient {
public:
    ~IDough() override = default;
};
