#pragma once
#include <iostream>

class Role
{
public:
	enum RoleType
	{
		STUDENT_ROLE,
		TEACHER_ROLE
	};
	Role(RoleType type) :m_Type(type) {}
	virtual ~Role() {}

	RoleType getRole() { return m_Type; }
protected:
	RoleType m_Type;
};
