#ifndef CREW_H
#define CREW_H

#include <iostream>
#include <string>

namespace namespace_crew
{ 

class Crew
{
private:
    std::string m_CrewName;

public:
    Crew(/* args */);
    ~Crew();

    void SetCrewName(std::string value);
    std::string GetCrewName();
    void printCrewName();
};

} // namespace_crew
#endif // CREW_H
