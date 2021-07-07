#ifndef ALLSKILLS_H
#define ALLSKILLS_H

namespace namespace_skill {

typedef enum SkillEnum {
    // Trade Skills
    Farming             = 0,
    Chemistry           = 1,
    Metalurgy           = 2,
    Programming         = 3,
    Language            = 4,
    
    // Build Skills
    Governance          = 5,
    Houses              = 6,
    SpaceStation        = 7,
    ShipBuilding        = 8,
    Terraforming        = 9,

    // Combat Skills
    Pilot               = 10,
    Swordsman           = 11,
    FistFighting        = 12,
    Marksman            = 13,
    Cannons             = 14,
    // Flight Skills
    Navigation          = 15,
    Thruster            = 16,
    Electrician         = 17,
    CommsSpecalist      = 18,
    Hullsman            = 19,
    
    // Length
    SkillEnumLength     = 20
} SkillEnum;

typedef enum SkillCategory {
    TradeSkills         = 0,
    BuildingSkills      = 1,
    CombatSkills        = 2,
    FlightSkills        = 3,
    SkillCategoryLength = 4
} SkillCategory;



} // namespace_skill
#endif // ALLSKILLS_H