#include "TeacherRole.h"


TeacherRole::TeacherRole(std::vector<std::string> courses) : Role(TEACHER_ROLE),
m_Courses(courses)
{
}