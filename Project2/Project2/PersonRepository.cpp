#include "PersonRepository.h"
#include "StudentRole.h"
#include "TeacherRole.h"


Person* PersonRepository::findByFullName(const std::string& firstName, const std::string& lastName)
{
	for (int i = 0; i < m_Entities.size(); i++) 
	{
		if (!(m_Entities[i]->getFirstName()).compare(firstName) && !(m_Entities[i]->getLastName()).compare(lastName))
			return m_Entities[i];
	}
}
std::vector<Person*> PersonRepository::findByRole(Role::RoleType role)
{
	std::vector<Person*> result;
	switch (role)
	{
	case Role::STUDENT_ROLE:
		for (Person*& pers : m_Entities)
			if (pers->isStudent())
				result.push_back(pers);
		break;
	case Role::TEACHER_ROLE:
		for (Person*& pers : m_Entities)
			if (pers->isTeacher())
				result.push_back(pers);
		break;
	}
	return result;
}
std::vector<Person*> PersonRepository::findStudentsByGroup(const int group)
{
	std::vector<Person*> studentsByGroup;
	for (int i = 0; i < m_Entities.size(); i++)
	{
		StudentRole* temp = dynamic_cast<StudentRole*>(m_Entities[i]->getStudentRole());
		if (m_Entities[i]->isStudent() && temp->getGroup() == group)
			studentsByGroup.push_back(m_Entities[i]);
	}
	return studentsByGroup;
}