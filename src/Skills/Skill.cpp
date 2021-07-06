#include "Skill.h"

using namespace namespace_skill;

Skill::Skill() {
    m_skillName = "";
    m_skillPoints = 0;
}

Skill::Skill(std::string skillName) {
    m_skillName = skillName;
    m_skillPoints = 0;
    m_skillRank = NewComer;
}

Skill::Skill(std::string skillName, int skillPoints) {
    m_skillName = skillName;
    m_skillPoints = skillPoints;
    m_skillRank = NewComer;
}

Skill::Skill(std::string skillName, int skillPoints, SkillRank skillRank) {
    m_skillName = skillName;
    m_skillPoints = skillPoints;
    m_skillRank = skillRank;
}

Skill::~Skill() {}