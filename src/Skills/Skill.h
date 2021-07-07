#ifndef SKILL_H
#define SKILL_H

#include <iostream>

#include "SkillRank.h"
#include "SkillList/AllSkills.h"

namespace namespace_skill
{

class Skill
{
public:
    Skill();
    ~Skill();
    Skill(SkillEnum skillName);
    Skill(SkillEnum skillName, int skillPoints);
    Skill(SkillEnum skillName, int skillPoints, SkillRank skillRank);

    SkillEnum m_skillName;
    SkillRank m_skillRank;
    int m_skillPoints;
};

} // namespace_skill
#endif // SKILL_H
