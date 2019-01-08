#pragma once
#include "Room.h"
#include "Repository.h"

class RoomRepository : public Repository<Room> {

public:
	RoomRepository() {}

	Room* findByName(const std::string&);
	std::vector<Room*> findByType(Room::RoomType room_type);
private:

};




