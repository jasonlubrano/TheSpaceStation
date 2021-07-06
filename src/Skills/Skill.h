#ifndef SKILL_H
#define SKILL_H

#include "SkillRank.h"
#include "SkillMapper.h"

namespace namespace_skill
{

class Skill
{
private:
    int skillLevel;

public:
    namespace_skillmapper::SkillMapper m_skillMap;
    Skill();
};

} // namespace_skill
#endif // SKILL_H
