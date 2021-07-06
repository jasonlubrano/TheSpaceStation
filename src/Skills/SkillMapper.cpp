#include "SkillMapper.h"

using namespace namespace_skillmapper;

SkillMapper::SkillMapper() {
    MapSkills();
    PrintSkillMap();
}

std::map<SkillRank, std::string> SkillMapper::MapSkills() {
    int skillRankLength = static_cast<int>(SkillRank::SkillRankLength);
    SkillRank sr;
    for(int i=0; i<skillRankLength; ++i) {
        sr = static_cast<SkillRank>(i);
        switch (sr)
        {
        case NewComer:
            SetSkillMapValue(NewComer, "New Comer");
            break;
        case Neophyte:
            SetSkillMapValue(Neophyte, "Neophyte");
            break;
        case Student:
            SetSkillMapValue(Student, "Student");
            break;
        case Adept:
            SetSkillMapValue(Adept, "Adept");
            break;
        case Professor:
            SetSkillMapValue(Professor, "Professor");
            break;
        case GrandMaster:
            SetSkillMapValue(GrandMaster, "Grand Master");
            break;
        default:
            break;
        }

    }
}

void SkillMapper::SetSkillMapValue(SkillRank srKey, std::string srValue) {
    std::map<SkillRank, std::string>::iterator it = m_skillMap.find(srKey); 
    if (it != m_skillMap.end()) {
        it->second = srValue;
    }
}

void SkillMapper::PrintSkillMap() {
    printf("\n ~ SKILL MAP ~ \n");
    for(std::map<SkillRank, std::string>::const_iterator it = m_skillMap.begin(); it != m_skillMap.end(); ++it)
    {
        std::cout << it->first << " " << it->second << "\n";
    }
}
