#include "SkillList.h"

using namespace namespace_skill;

SkillList::SkillList() {
    PopulateSkillList(m_SkillCreator.tradesSkillVector);
    PopulateSkillList(m_SkillCreator.buildingSkillVector);
    PopulateSkillList(m_SkillCreator.combatSkillVector);
    PopulateSkillList(m_SkillCreator.flightSkillVector);
}

SkillList::~SkillList() {}

void SkillList::PopulateSkillList(const std::vector<Skill> &skillVect) {
    for(int i = 0; i < skillVect.size(); i++) {
        m_SkillList.push_back(skillVect.at(i));
    }
}

void SkillList::PrintSkillListMap() {
    printf("\n ~ Skills Lists ~ \n");
    
    for(int i = 0; i < m_SkillList.size(); i++) {
        std::cout << m_SkillList.at(i).m_skillName << " " <<
        m_SkillList.at(i).m_skillPoints << " " <<
        m_SkillList.at(i).m_skillRank << std::endl;
    }
}
