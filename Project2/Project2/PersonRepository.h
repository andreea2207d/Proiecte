#pragma once
#include "Person.h"
#include "Repository.h"

class PersonRepository : public Repository<Person> {
public:
	PersonRepository() {}

	Person* findByFullName(const std::string&, const std::string&);
	std::vector<Person*> findByRole(Role::RoleType role);
	std::vector<Person*> findStudentsByGroup(const int);

};
