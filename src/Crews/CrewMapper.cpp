#include "CrewMapper.h"

using namespace namespace_crewmapper;

CrewMapper::CrewMapper() {
    MapCrews();
    PrintCrewMap();
}

std::map<CrewRank, std::string> CrewMapper::MapCrews() {
    int crewRankLength = static_cast<int>(CrewRank::CrewRankLength);
    CrewRank cr;
    for(int i=0; i<crewRankLength; ++i) {
        cr = static_cast<CrewRank>(i);
        switch (cr)
        {
        case NoCrew:
            SetCrewMapValue(cr, "No Crew");
            break;
        case StarshipCrew:
            SetCrewMapValue(cr, "Starship Crew");
            break;
        case Corporation:
            SetCrewMapValue(cr, "Corporation");
            break;
        case Governmental:
            SetCrewMapValue(cr, "Governmental Body");
            break;
        default:
            break;
        }
    }
}

void CrewMapper::SetCrewMapValue(CrewRank crKey, std::string crValue) {
    std::map<CrewRank, std::string>::iterator it = m_crewMap.find(crKey); 
    if (it != m_crewMap.end()) {
        it->second = crValue;
    }
}

void CrewMapper::PrintCrewMap() {
    printf("\n ~ CREW MAP ~ \n");
    for(std::map<CrewRank, std::string>::const_iterator it = m_crewMap.begin(); it != m_crewMap.end(); ++it)
    {
        std::cout << it->first << " " << it->second << "\n";
    }
}
