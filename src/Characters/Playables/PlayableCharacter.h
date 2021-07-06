#ifndef PLAYABLECHARACTER_H
#define PLAYABLECHARACTER_H

#include <iostream>
#include <string>

#include "../Character.h"

namespace namespace_character {

class PlayableCharacter
: public Character
{
public:
    PlayableCharacter();
    ~PlayableCharacter();
};

} // namespace_character
#endif // PLAYABLECHARACTER_H
