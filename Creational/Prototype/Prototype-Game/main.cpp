//
// Created by khovakim on 7/29/25.
//
#include <iostream>
#include <memory>

#include "prototypeFactory.h"

void Client(PrototypeFactory &factory) {
    std::cout << "Let's create a Prototype 1\n";

    std::unique_ptr<Character> prototype = factory.createCharacter(CharacterType::Warrior);
    prototype->display();

    std::cout << "\n";
    std::cout << "Let's create a Prototype 2 \n";

    prototype = factory.createCharacter(CharacterType::Archer);
    prototype->display();

    std::cout << "\n";
    std::cout << "Let's create a Prototype 3 \n";

    prototype = factory.createCharacter(CharacterType::Mage);
    prototype->display();
}

int main()
{
    PrototypeFactory factory {
        new Warrior{"Conan", 150, 30},
        new Archer{"Legolas", 100, 25},
        new Mage{"Gandalf", 80, 40}
    };
    Client(factory);
    return 0;
}