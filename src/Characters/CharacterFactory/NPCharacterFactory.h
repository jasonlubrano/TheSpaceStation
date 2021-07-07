#ifndef NPCHARACTERFACTORY_H
#define NPCHARACTERFACTORY_H

#include "../Nonplayables/NonplayableCharacter.h"

namespace namespace_character
{

class NPCharacterFactory
: public NonplayableCharacter
{
public:
    NPCharacterFactory();
    ~NPCharacterFactory();

    NonplayableCharacter CreateCharacter_GrandmasterPilot_Hawkfin();

    void PrintNPCList(int opt);

    std::vector<NonplayableCharacter> m_NPCharacterList;
};

} // namespace_character

#endif // NPCHARACTERFACTORY_H