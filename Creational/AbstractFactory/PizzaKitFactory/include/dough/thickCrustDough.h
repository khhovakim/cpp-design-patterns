#pragma once // __ThickCrustDough__

# include "dough.h"  // For IDough interface

class ThickCrustDough : public IDough {
public:
    ~ThickCrustDough() override = default;

public:
    const char* getDescription() const noexcept override {
        return "Thick Crust Dough";
    }

};
