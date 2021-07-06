#ifndef SKILLLIST_H
#define SKILLLIST_H

#include "SkillCreator.h"

namespace namespace_skill
{

class SkillList
: public Skill
{
public:
    SkillList();
    ~SkillList();

    void PopulateSkillList(const std::vector<Skill>& skillVect);
    void PrintSkillListMap();

    SkillCreator m_SkillCreator;
    std::vector<Skill> m_SkillList;
};

} // namespace_skill
#endif // SKILLLIST_H
