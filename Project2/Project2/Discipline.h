#pragma once
#include <string>

class Discipline {

public:
	Discipline(const std::string&, const int = -1);
	Discipline(const Discipline&);

	const std::string getSpecialization() const;
	const int getGroup() const;
private:
	std::string m_Specialization;
	int m_Group;		

};