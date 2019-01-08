#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Role.h"

class TeacherRole : public Role {

public:
	TeacherRole(const std::vector<std::string> = {});


private:
	std::vector<std::string> m_Courses;
};

