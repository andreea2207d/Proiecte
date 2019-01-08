#include "StudentRole.h"

StudentRole::StudentRole(int group, std::string specialisation, int year) :Role(STUDENT_ROLE),
m_Group = group;
m_Specialisation = specialisation;
m_Year = year;
{

}
const int StudentRole::getGroup() const
{
	return m_Group;
}
const int StudentRole::getYear() const
{
	return m_Year;
}


