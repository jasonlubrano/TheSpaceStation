#ifndef CREWMAPPER_H
#define CREWMAPPER_H

#include <iostream>
#include <map>
#include <string>

#include "CrewRank.h"

namespace namespace_crewmapper
{

class CrewMapper {
public:
    CrewMapper();
    std::map<CrewRank, std::string> MapCrews();
    void SetCrewMapValue(CrewRank crKey, std::string crValue);
    void PrintCrewMap();
    ~CrewMapper();

    std::map<CrewRank, std::string> m_crewMap;
};

} // namespace_crewmapper

#endif // CREWMAPPER_H
