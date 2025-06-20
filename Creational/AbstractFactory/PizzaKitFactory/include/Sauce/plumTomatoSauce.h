#pragma once // __PlumTomatoSauce__

# include "sauce.h"  // For ISauce interface

class PlumTomatoSauce : public ISauce {
public:
    ~PlumTomatoSauce() override = default;

public:
    const char* getDescription() const noexcept override {
        return "Plum Tomato Sauce";
    }
};
