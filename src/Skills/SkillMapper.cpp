#include "SkillMapper.h"

using namespace namespace_skill;

SkillMapper::SkillMapper() {
    MapSkills();
    PrintSkillMap();
}

std::map<SkillRank, std::string> SkillMapper::MapSkills() {
    int skillRankLength = static_cast<int>(SkillRank::SkillRankLength);
    SkillRank sr;
    for(int i=0; i<skillRankLength; ++i) {
        sr = static_cast<SkillRank>(i);
        switch (sr) {
            case NewComer:
                SetSkillMapValue(sr, "New Comer");
                break;
            case Neophyte:
                SetSkillMapValue(sr, "Neophyte");
                break;
            case Student:
                SetSkillMapValue(sr, "Student");
                break;
            case Influenced:
                SetSkillMapValue(sr, "Influenced");
                break;
            case Adept:
                SetSkillMapValue(sr, "Adept");
                break;
            case Expert:
                SetSkillMapValue(sr, "Expert");
                break;
            case Master:
                SetSkillMapValue(sr, "Master");
                break;
            case Professor:
                SetSkillMapValue(sr, "Professor");
                break;
            case GrandMaster:
                SetSkillMapValue(sr, "Grand Master");
                break;
            case Champion:
                SetSkillMapValue(sr, "Champion");
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
