//
// Created by khovakim on 7/29/25.

#ifndef   __CHARACTER_H__
# define  __CHARACTER_H__

# include <string>             // For std::string
# include <utility>            // For std::move

# include <bits/unique_ptr.h>  // For std::unique_ptr

class Character {
public:
    explicit Character(std::string  name, const int health, const int damage)
        : m_name{std::move(name)}, m_health{health}, m_damage{damage}
    {    }

    Character(const Character &character) = default;
    Character(Character&&) noexcept = default;


public:
    virtual ~Character() = default;
    virtual void display() const = 0;
    [[nodiscard]]
    virtual std::unique_ptr<Character> clone() const = 0;

protected:
    std::string m_name;
    int         m_health;
    int         m_damage;
};

#endif   // __CHARACTER_H__
