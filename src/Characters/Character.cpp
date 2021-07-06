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

void Character::printCharacterName() {
    std::cout << "Name: " << GetCharacterName() << std::endl;
}
