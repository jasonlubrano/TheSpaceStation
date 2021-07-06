#ifndef SKILLCREATOR_H
#define SKILLCREATOR_H

#include <vector>
#include "Skill.h"

namespace namespace_skill
{

class SkillCreator
: public Skill
{

public:
    SkillCreator();
    ~SkillCreator();

    void CreateTradesSkillsVector();
    void CreateBuildingSkillsVector();
    void CreateCombatSkillsVector();
    void CreateFlightSkillsVector();

    std::vector<Skill> tradesSkillVector;
    std::vector<Skill> buildingSkillVector;
    std::vector<Skill> combatSkillVector;
    std::vector<Skill> flightSkillVector;

};

} // namespace_skill
#endif // SKILLCREATOR_H
