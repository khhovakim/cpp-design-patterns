#pragma once // __ParmigianoCheese__

# include "cheese.h"  // For ICheese interface

class ParmigianoCheese : public ICheese {
public:
    ~ParmigianoCheese() override = default;

public:
    const char* getDescription() const noexcept override {
        return "Parmigiano Cheese";
    }
};
