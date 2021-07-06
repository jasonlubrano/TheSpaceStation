#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

#include "../Skills/SkillList.h"

namespace namespace_character
{ 

class Character
{
public:
    Character();
    ~Character();

    void SetCharacterName(std::string value);
    std::string GetCharacterName();
    void PrintCharacterName();

    void SetCharacterTitle(std::string value);
    std::string GetCharacterTitle();
    void PrintCharacterTitle();
    void PrintCharacterNameAndTitle();

    void InitCharacterSkills();
    void LevelUpSkills(namespace_skill::Skill skill, int points);

    std::string m_characterName = "";
    std::string m_characterTitle = "";

    namespace_skill::SkillList m_characterSkillList;
};

} // namespace_character
#endif // CHARACTER_H
