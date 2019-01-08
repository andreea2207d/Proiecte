#include "DisciplineRepository.h"


std::vector<Discipline*> DisciplineRepository::getDisciplinesByGroup(const int group)
{
	std::vector<Discipline*> temp;
	for (int i = 0; i < m_Entities.size(); i++) {
		if (m_Entities[i]->getGroup() == group) {
			temp.push_back(new Discipline(*m_Entities[i]));
		}
	}
	return temp;
}

std::vector<Discipline*> DisciplineRepository::getDisciplinesBySpecialization(const std::string &specialization)
{
	std::vector<Discipline*> temp;
	for (int i = 0; i < m_Entities.size(); i++) {
		if (m_Entities[i]->getSpecialization() == specialization) {
			temp.push_back(new Discipline(*m_Entities[i]));
		}
	}
	return temp;
}
