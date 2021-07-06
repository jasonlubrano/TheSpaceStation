#ifndef CREW_H
#define CREW_H

#include <iostream>
#include <string>
#include <vector>

#include "../Characters/Character.h"
#include "CrewRank.h"

namespace namespace_crew
{ 

class Crew
{
private:
    std::string m_CrewName;
    std::vector<namespace_character::Character> m_CrewList;

public:
    Crew();
    ~Crew();

    void SetCrewName(std::string value);
    std::string GetCrewName();
    void printCrewName();

    CrewRank m_crewRank;
};

} // namespace_crew
#endif // CREW_H
