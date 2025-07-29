//
// Created by khovakim on 7/29/25.
//

#ifndef   __MAGE_H__
# define  __MAGE_H__

# include <string>  // For std::string

# include <bits/unique_ptr.h>  // For std::unique_ptr

# include "character.h"

class Mage final : public Character {
public:
    explicit Mage(const std::string& name, const int health, const int damage)
        : Character{name, health, damage}
    {   }

    Mage(const Mage &mage) = default;
    Mage(Mage&&) noexcept = default;
public:
    ~Mage() override = default;

    void display() const override;
    [[nodiscard]]
    std::unique_ptr<Character> clone() const override {
        return std::make_unique<Mage>(*this);
    }
};

#endif // __MAGE_H__
