#include "ActivityRepository.h"

Activity * ActivityRepository::getActivityByDescription(const std::string description)
{
	for (int i = 0; i < m_Entities.size(); i++) {
		if (m_Entities[i]->getDescription() == description) {
			return m_Entities[i];
		}
	}
}