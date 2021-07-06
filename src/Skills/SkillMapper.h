#ifndef SKILLMAPPING_H
#define SKILLMAPPING_H

#include <iostream>
#include <map>
#include <string>

#include "SkillRank.h"

namespace namespace_skillmapper
{

class SkillMapper {
public:
    SkillMapper();
    std::map<SkillRank, std::string> MapSkills();
    void SetSkillMapValue(SkillRank srKey, std::string srValue);
    void PrintSkillMap();
    ~SkillMapper();

    std::map<SkillRank, std::string> m_skillMap;
};

} // namespace_skillmapper

#endif // SKILLMAPPING_H
