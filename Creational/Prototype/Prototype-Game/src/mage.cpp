//
// Created by khovakim on 7/29/25.
//

#include "mage.h"

#include <iostream>  // For std::cout

void Mage::display() const {
    std::cout << "[Archer]\n" << m_name
              << "\t● HP: "    << m_health
              << "\t● ATK: "   << m_damage
              << "\n";
}