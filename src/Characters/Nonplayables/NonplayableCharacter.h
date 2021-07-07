#ifndef NONPLAYABLECHARACTER_H
#define NONPLAYABLECHARACTER_H

#include <iostream>
#include <string>

#include "../Character.h"

namespace namespace_character {

class NonplayableCharacter
: public Character
{
public:
    NonplayableCharacter();
    NonplayableCharacter(std::string name);
    NonplayableCharacter(std::string name, std::string title);
    ~NonplayableCharacter();
};

} // namespace_character
#endif // NONPLAYABLECHARACTER_H
