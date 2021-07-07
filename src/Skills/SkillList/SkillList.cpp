#include "SkillList.h"

using namespace namespace_skill;

SkillList::SkillList() {
    PopulateSkillList();
}

SkillList::~SkillList() {}

void SkillList::PopulateSkillList() {
    for(int i = SkillEnum::Farming; i != SkillEnum::SkillEnumLength; i++ ) {
        SkillEnum currSkill = static_cast<SkillEnum>(i);
        Skill newSkill(currSkill);
        m_SkillList.push_back(newSkill);
    }
}

void SkillList::PrintSkillsList() {
    for(int i = 0; i < m_SkillList.size(); i++) {
        std::cout << 
        "[Skill: " << m_SkillList.at(i).m_skillName << " " <<
        "Pts: " << m_SkillList.at(i).m_skillPoints <<  " " <<
        "Rank: " << m_SkillList.at(i).m_skillRank << " ]" << 
        std::endl;
    }
}