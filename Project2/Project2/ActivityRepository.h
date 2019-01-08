#pragma once
#include "Activity.h"
#include <iostream>
#include <vector>
#include <string>
#include "Repository.h"

class ActivityRepository : public Repository<Activity> {

public:
	ActivityRepository() {}

	Activity* getActivityByDescription(const std::string);


};