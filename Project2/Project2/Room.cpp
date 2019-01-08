#include "Room.h"
#include <iostream>

void Room::SetRoomName(std::string RoomName)
{
	m_Name = RoomName;

}

std::string Room::GetRoomName()
{
	return m_Name;
}

Room::Room(std::string Name)
{
	m_Name = Name;

}