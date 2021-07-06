#include "Character.h"

using namespace namespace_character;

Character::Character() {
    printf("New Character Created\n");
}

Character::~Character() {}

void Character::SetCharacterName(std::string value) {
    m_characterName = value;
}

std::string Character::GetCharacterName() {
    return m_characterName;
}

void Character::PrintCharacterName() {
    std::cout << GetCharacterName() << std::endl;
}


void Character::SetCharacterTitle(std::string value) {
    m_characterTitle = value;
}

std::string Character::GetCharacterTitle() {
    return m_characterTitle;
}

void Character::PrintCharacterTitle() {
    std::cout << GetCharacterTitle() << std::endl;
}

void Character::PrintCharacterNameAndTitle() {
    std::string title = GetCharacterTitle();
    std::string name = GetCharacterName();
    if(title == "") {
        PrintCharacterName();
    } else {
        std::cout << title << " " << name << std::endl;
    }
}

void Character::LevelUpSkills(namespace_skill::Skill skill, int points) {
    for(int i=0; i < m_characterSkillList.m_SkillList.size(); ++i) {
        if(m_characterSkillList.m_SkillList[i].m_skillName == skill.m_skillName) {
            m_characterSkillList.m_SkillList[i].m_skillPoints += points;
        }
    }
}

void Character::InitCharacterSkills() {
    m_characterSkillList.PrintSkillListMap();
}