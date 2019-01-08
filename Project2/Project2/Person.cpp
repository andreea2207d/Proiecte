#include "Person.h"
#include "TeacherRole.h"
#include "StudentRole.h"

Person::Person(const std::vector<Role*>& roles,const std::vector<int>CNP,const std::string firstName, const std::string lastName,const std::string email) :
	m_Roles(roles),
	m_CNP(CNP),
	m_FirstName(firstName),
	m_LastName(lastName),
	m_Email(email)
{
}

const std::string& Person::getFirstName() const
{
	return m_FirstName;
}
const std::string & Person::getLastName() const
{
	return m_LastName;
}
const std::string & Person::getEmail() const
{
	return m_Email;
}
void Person::addRole(Role * new_role)
{
	m_Roles.push_back(new_role);
}
bool Person::isStudent() 
{
	for (Role* currentRole : m_Roles) 
		if (currentRole->getRole() == Role::STUDENT_ROLE)
			return true;
	return false;
}
bool Person::isTeacher()
{
	for (Role*& currentRole : m_Roles) 
		if (currentRole->getRole() == Role::TEACHER_ROLE)
			return true;
	return false;
}
std::istream & operator>>(std::istream & a, Person & b)
{
	std::string sCNP;
	a >> sCNP;
	for (int i = 0; i < 13; i++) {
		b.m_CNP.push_back((int)(sCNP.at(i) - 48));
	}
	a >> b.m_FirstName;
	a >> b.m_LastName;
	a >> b.m_Email;

	return a;
}

std::ostream & operator<<(std::ostream & c, Person & b)
{
	c << "CNP:";
	for (int i = 0; i < 13; i++) {
		c << b.m_CNP[i];
	}
    c << "\nName: " << b.m_LastName << " " << b.m_FirstName << '\n';
	c << "Email: " << b.m_Email << "\n";

	return c;
}
std::ostream& operator<<(std::ostream & c, Person & b)
{
	stream << b.m_CNP << " " << b.m_FirstName << " " << b.m_LastName << " " << b.m_Email << '\n';
	for (Role*& i : b.m_Roles)
	{
		switch (i->getRole())
		{
		case(Role::RoleType::STUDENT_ROLE):
			stream << *dynamic_cast<StudentRole*>(i);
			break;
		case(Role::RoleType::TEACHER_ROLE):
			stream << *dynamic_cast<TeacherRole*>(i);
			break;
		}
	}
	return c;
}
