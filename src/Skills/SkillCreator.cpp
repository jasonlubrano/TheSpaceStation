#include "SkillCreator.h"

using namespace namespace_skill;

SkillCreator::SkillCreator() {
    CreateTradesSkillsVector();
    CreateBuildingSkillsVector();
    CreateCombatSkillsVector();
    CreateFlightSkillsVector();
}

SkillCreator::~SkillCreator() {}

void SkillCreator::CreateTradesSkillsVector() {
    Skill tradesFarming("Farming");
    Skill tradesChemistry("Chemistry");
    Skill tradesMetalurgy("Metalurgy");
    Skill tradesProgramming("Programming");
    Skill tradesLanguage("Language");

    tradesSkillVector.push_back(tradesFarming);
    tradesSkillVector.push_back(tradesChemistry);
    tradesSkillVector.push_back(tradesMetalurgy);
    tradesSkillVector.push_back(tradesProgramming);
    tradesSkillVector.push_back(tradesLanguage);
}

void SkillCreator::CreateBuildingSkillsVector() {
    Skill buildingGovernance("Governance");
    Skill buildingHouses("House Building");
    Skill buildingSpaceStation("Space Station Building");
    Skill buildingShips("Ship Building");
    Skill buildingTerraforming("Terraforming");;

    buildingSkillVector.push_back(buildingGovernance);
    buildingSkillVector.push_back(buildingHouses);
    buildingSkillVector.push_back(buildingSpaceStation);
    buildingSkillVector.push_back(buildingShips);
    buildingSkillVector.push_back(buildingTerraforming);
}

void SkillCreator::CreateCombatSkillsVector() {
    Skill combatPilot("Piloting");
    Skill combatSword("Sword fighting");
    Skill combatFist("Fist fighting");
    Skill combatShooting("Marksmanship");
    Skill combatCannons("Cannon firing");

    combatSkillVector.push_back(combatPilot);
    combatSkillVector.push_back(combatSword);
    combatSkillVector.push_back(combatFist);
    combatSkillVector.push_back(combatShooting);
    combatSkillVector.push_back(combatCannons);
}

void SkillCreator::CreateFlightSkillsVector() {
    Skill flightNavigation("Navigation");
    Skill flightThrusters("Thrusters");
    Skill flightElectrical("Electrical");
    Skill flightSatellite("Satellites");
    Skill flightHull("Hulls");

    flightSkillVector.push_back(flightNavigation);
    flightSkillVector.push_back(flightThrusters);
    flightSkillVector.push_back(flightElectrical);
    flightSkillVector.push_back(flightSatellite);
    flightSkillVector.push_back(flightHull);
}
