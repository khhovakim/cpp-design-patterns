#pragma once // __MarinaraSauce__

# include "sauce.h"  // For ISauce interface

class MarinaraSauce : public ISauce {
public:
    ~MarinaraSauce() override = default;

public:
    const char* getDescription() const noexcept override {
        return "Marinara Sauce";
    }
};
