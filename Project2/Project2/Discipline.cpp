#include "Discipline.h"

Discipline::Discipline(const std::string& specialization, const int group) :
	m_Specialization = specialization;
	m_Group = group;
{
}

Discipline::Discipline(const Discipline &discipline) :
	m_Specialization = discipline.m_Specialization;
	m_Group = discipline.m_Group;
{
}

const std::string Discipline::getSpecialization() const
{
	return m_Specialization;
}

const int Discipline::getGroup() const
{
	return m_Group;
}
