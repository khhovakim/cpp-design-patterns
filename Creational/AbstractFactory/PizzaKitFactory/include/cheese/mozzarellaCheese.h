#pragma once // __MozzarellaCheese__

# include "cheese.h"  // For ICheese interface

class MozzarellaCheese : public ICheese {
public:
    ~MozzarellaCheese() override = default;

public:
    const char* getDescription() const noexcept override {
        return "Mozzarella Cheese";
    }
};
