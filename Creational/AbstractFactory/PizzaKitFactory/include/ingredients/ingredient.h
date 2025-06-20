#pragma once // __I_Ingredient__

class IIngredient {
public:
    virtual ~IIngredient() = default;

public:
    virtual const char* getDescription() const noexcept = 0;

};