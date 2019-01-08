#include <iostream>
#include <vector>
#include <string>
#include "TeacherRole.h"
#include "StudentRole.h"

class Person {

public:
	Person(const std::vector<Role*>, const std::vector<int> = {}, const std::string = "", const std::string = "", const std::string = "");
	Person(const Person*, const std::vector<Role*>);
	void addRole(Role* new_role);
	friend std::istream& operator>>(std::istream&, Person&);
	friend std::ostream& operator<<(std::ostream&, Person&);
    bool isStudent();
	bool isTeacher();
	const std::string& getFirstName() const;
	const std::string& getLastName() const;
	const std::string& getEmail() const;
	Role* getStudentRole() const;
	Role* getTeacherRole() const;

protected:
	std::vector<int> m_CNP;
	std::string m_FirstName;
	std::string m_LastName;
	std::string m_Email;
	std::vector<Role*> m_Roles;

};


