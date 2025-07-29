//
// Created by khovakim on 7/29/25.
//

#include "warrior.h"

#include <iostream>  // For std::cout

void Warrior::display() const {
    std::cout << "[Warrior]\n" << m_name
              << "\t● HP: "    << m_health
              << "\t● ATK: "   << m_damage
              << "\n";
}

