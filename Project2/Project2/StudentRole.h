#pragma once
#include "Role.h"
#include <iostream>
#include <string>

class StudentRole : public Role {

public:
	StudentRole(const int = 0, const std::string = "", const int = 0);
	const int getGroup() const;
	const int getYear() const;


private:
	int m_Group;
	std::string m_Specialisation;

};

