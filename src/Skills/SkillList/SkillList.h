#ifndef SKILLLIST_H
#define SKILLLIST_H

#include <vector>
#include <iomanip>

#include "../Skill.h"

namespace namespace_skill
{

class SkillList
: public Skill
{
public:
    SkillList();
    ~SkillList();

    void PopulateSkillList();
    void PrintSkillsList();

    std::vector<Skill> m_SkillList;
};

} // namespace_skill
#endif // SKILLLIST_H
