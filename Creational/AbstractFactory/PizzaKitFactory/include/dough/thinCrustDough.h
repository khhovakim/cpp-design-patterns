#pragma once // __ThinCrustDough__

# include "dough.h"  // For IDough interface

class ThinCrustDough : public IDough {
public:
    ~ThinCrustDough() override = default;

public:
    const char* getDescription() const noexcept override {
        return "Thin Crust Dough";
    }

};
