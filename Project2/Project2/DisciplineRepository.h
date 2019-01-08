#pragma once
#include "Repository.h"
#include "Discipline.h"
#include <string>

class DisciplineRepository : public Repository<Discipline> 
{

public:
	DisciplineRepository() {}

	std::vector<Discipline*> getDisciplinesByGroup(const int);
	std::vector<Discipline*> getDisciplinesBySpecialization(const std::string&);

};