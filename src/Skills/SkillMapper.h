#ifndef SKILLMAPPER_H
#define SKILLMAPPER_H

#include <iostream>
#include <map>
#include <string>

#include "SkillRank.h"

namespace namespace_skill
{

class SkillMapper {
public:
    SkillMapper();
    ~SkillMapper();
    std::map<SkillRank, std::string> MapSkills();
    void SetSkillMapValue(SkillRank srKey, std::string srValue);
    void PrintSkillMap();

    std::map<SkillRank, std::string> m_skillMap;
};

} // namespace_skill

#endif // SKILLMAPPER_H
