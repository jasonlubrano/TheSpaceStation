#include "Crew.h"

using namespace namespace_crew;

Crew::Crew() {}

Crew::~Crew() {}

void Crew::SetCrewName(std::string value) {
    m_CrewName = value;
}

std::string Crew::GetCrewName() {
    return m_CrewName;
}

void Crew::printCrewName() {
    std::cout << "Name: " << GetCrewName() << std::endl;
}
