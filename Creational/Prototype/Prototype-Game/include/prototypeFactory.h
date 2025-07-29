//
// Created by khovakim on 7/29/25.
//

#ifndef   __PROTOTYPEFACTORY_H__
# define  __PROTOTYPEFACTORY_H__


# include <unordered_map>  // For std::unordered_map

# include <bits/unique_ptr.h>  // For std::unique_ptr

# include "characterType.h"  // For CharacterType
# include "character.h"      // For Character
# include "warrior.h"        // For Warrior
# include "archer.h"         // For Archer
# include "mage.h"           // For Mage

class PrototypeFactory final {
public:
    explicit PrototypeFactory(Warrior* warrior, Archer* archer, Mage* mage)
        : m_prototypeMap {
            { CharacterType::Warrior, warrior },
            { CharacterType::Archer , archer  },
            { CharacterType::Mage   , mage    }
        } { }

    ~PrototypeFactory() {
        delete m_prototypeMap[CharacterType::Warrior];
        delete m_prototypeMap[CharacterType::Archer];
        delete m_prototypeMap[CharacterType::Mage];
    }

public:
    [[nodiscard]]
    std::unique_ptr<Character> createCharacter(const CharacterType type) {
        return m_prototypeMap[type]->clone();
    }
private:
    std::unordered_map<const CharacterType, Character *> m_prototypeMap;
};

#endif // __PROTOTYPEFACTORY_H__
