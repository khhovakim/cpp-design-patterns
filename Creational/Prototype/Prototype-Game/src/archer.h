//
// Created by khovakim on 7/29/25.
//

#ifndef   __ARCHER_H__
# define  __ARCHER_H__

# include <string>  // For std::string

# include <bits/unique_ptr.h>  // For std::unique_ptr

# include "character.h"

class Archer final : public Character {
public:
    explicit Archer(const std::string& name, const int health, const int damage)
        : Character{name, health, damage}
    {   }

    Archer(const Archer &archer) = default;
    Archer(Archer&&) noexcept = default;
public:
    ~Archer() override = default;

    void display() const override;
    [[nodiscard]]
    std::unique_ptr<Character> clone() const override {
        return std::make_unique<Archer>(*this);
    }
};

#endif // __ARCHER_H__
