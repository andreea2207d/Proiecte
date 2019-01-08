#include "Activity.h"

Activity::Activity(Room *location, Person *owner, std::string description) :
	m_Description = description;
    m_Location = location;
	m_Owner = owner;
{
}

const std::string Activity::getDescription() const
{
	return m_Description;
}

Room * Activity::getLocation() const
{
	return m_Location;
}