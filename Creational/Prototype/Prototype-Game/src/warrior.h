//
// Created by khovakim on 7/29/25.
//

#ifndef   __WARRIOR_H__
# define  __WARRIOR_H__

# include <string>  // For std::string

# include <bits/unique_ptr.h>  // For std::unique_ptr

# include "character.h"

class Warrior final : public Character {
public:
    explicit Warrior(const std::string& name, const int health, const int damage)
        : Character{name, health, damage}
    {   }

    Warrior(const Warrior &warrior) = default;
    Warrior(Warrior&&) noexcept = default;
public:
    ~Warrior() override = default;

    void display() const override;
    [[nodiscard]]
    std::unique_ptr<Character> clone() const override {
        return std::make_unique<Warrior>(*this);
    }
};

#endif // __WARRIOR_H__
