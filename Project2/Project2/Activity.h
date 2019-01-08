#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Room.h"
#include "Person.h"

class Activity {

public:
	Activity(Room*, Person*, const std::string) {}
	virtual ~Activity() {}
	const std::string getDescription()const;
	Room* getLocation() const;

protected:
	Room* m_Location;
	Person* m_Owner;
	std::string m_Description;
};

