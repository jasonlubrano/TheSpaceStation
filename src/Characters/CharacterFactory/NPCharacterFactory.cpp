#include "NPCharacterFactory.h"

using namespace namespace_character;

NPCharacterFactory::NPCharacterFactory() {
    m_NPCharacterList.push_back(CreateCharacter_GrandmasterPilot_Hawkfin());
}

NPCharacterFactory::~NPCharacterFactory() {}

NonplayableCharacter NPCharacterFactory::CreateCharacter_GrandmasterPilot_Hawkfin() {
    NonplayableCharacter hawkfinNPC("Hawkfin", "Grandmaster Pilot");
    namespace_skill::Skill grandmasterPilotSkill(namespace_skill::SkillEnum::Pilot, 1000, namespace_skill::SkillRank::GrandMaster);
    hawkfinNPC.AssignCharacterSkill(grandmasterPilotSkill);
    return hawkfinNPC;
}

void NPCharacterFactory::PrintNPCList(int opt) {
    switch(opt) {
        case 1:
            for(int i=0; i< m_NPCharacterList.size(); i++) {
                Character curChar = m_NPCharacterList[i];
                curChar.PrintCharacterNameAndTitle();
                curChar.m_characterSkillList.PrintSkillsList();
            }
        case 2:
            for(int i=0; i< m_NPCharacterList.size(); i++) {
                Character curChar = m_NPCharacterList[i];
                curChar.PrintCharacterNameAndTitle();
            }
            break;
        default:
            break;
    }
}