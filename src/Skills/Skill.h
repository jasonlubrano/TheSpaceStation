#ifndef SKILL_H
#define SKILL_H

#include <iostream>

#include "SkillRank.h"

namespace namespace_skill
{

class Skill
{
public:
    Skill();
    ~Skill();
    Skill(std::string skillName);
    Skill(std::string skillName, int skillPoints);
    Skill(std::string skillName, int skillPoints, SkillRank skillRank);

    std::string m_skillName;
    SkillRank m_skillRank;
    int m_skillPoints;
};

} // namespace_skill
#endif // SKILL_H
