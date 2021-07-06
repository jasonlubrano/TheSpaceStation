#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

#include "../Crews/Crew.h"

namespace namespace_character
{ 

class Character
{
private:
    std::string m_characterName;
    namespace_crew::Crew m_Crew;

public:
    Character(/* args */);
    ~Character();

    void SetCharacterName(std::string value);
    std::string GetCharacterName();
    void printCharacterName();
};

} // namespace_character
#endif // CHARACTER_H