#include <iostream>

#include "../Map/Map.h"

#include "../Characters/Character.h"
#include "../Characters/Nonplayables/NonplayableCharacter.h"
#include "../Characters/CharacterFactory/NPCharacterFactory.h"
#include "../Characters/Playables/PlayableCharacter.h"

#include "../Skills/Skill.h"

#include "../Crews/Crew.h"

using namespace namespace_map;
using namespace namespace_character;
using namespace namespace_skill;
using namespace namespace_crew;

using namespace_map::Map;
using namespace_character::NPCharacterFactory;
using namespace_character::PlayableCharacter;
using namespace_skill::Skill;
using namespace_crew::Crew;

NPCharacterFactory NPCFactory;

int main(int argc, char *argv[]);