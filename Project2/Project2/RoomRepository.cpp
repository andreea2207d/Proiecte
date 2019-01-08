#include "RoomRepository.h"


Room* RoomRepository::findByName(const std::string &name)
{
	for (int i = 0; i < m_Entities.size(); i++)
		if (m_Entities[i]->getName() == name)
			return m_Entities[i];
}
std::vector<Room*> RoomRepository::findByType(Room::RoomType room_type)
{
	std::vector<Room*> result;
	for (Room* each_room : m_Entities)
		if (each_room->getType() == room_type)
			result.push_back(each_room);
	return result;
}
