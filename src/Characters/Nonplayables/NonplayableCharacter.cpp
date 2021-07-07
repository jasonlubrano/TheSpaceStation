#include "NonplayableCharacter.h"

using namespace namespace_character;

NonplayableCharacter::NonplayableCharacter() {
    printf("New NPC Created\n");
    m_characterName = "";
    m_characterTitle = "";
    InitCharacterSkills();
}

NonplayableCharacter::NonplayableCharacter(std::string name) {
    m_characterName = name;
    m_characterTitle = "";
    InitCharacterSkills();
}

NonplayableCharacter::NonplayableCharacter(std::string name, std::string title) {
    m_characterName = name;
    m_characterTitle = title;
    InitCharacterSkills();    
}

NonplayableCharacter::~NonplayableCharacter() {}