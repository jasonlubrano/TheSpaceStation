#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

#include "../Skills/SkillList/SkillList.h"

namespace namespace_character
{ 

class Character
{
public:
    Character();
    Character(std::string name);
    Character(std::string name, std::string title);
    ~Character();

    void SetCharacterName(std::string value);
    std::string GetCharacterName();
    void PrintCharacterName();

    void SetCharacterTitle(std::string value);
    std::string GetCharacterTitle();
    void PrintCharacterTitle();
    void PrintCharacterNameAndTitle();

    void InitCharacterSkills();
    void LevelUpSkillPoints(namespace_skill::Skill skill, int points);
    void AssignCharacterSkill(namespace_skill::Skill skill);

    std::string m_characterName = "";
    std::string m_characterTitle = "";

    namespace_skill::SkillList m_characterSkillList;
};

} // namespace_character
#endif // CHARACTER_H
