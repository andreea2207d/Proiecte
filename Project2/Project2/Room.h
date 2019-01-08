#pragma once
#include <iostream>

class Room {

public:
	void SetRoomName(std::string);
	std::string GetRoomName();
	Room(std::string);

private:
	std::string m_Name;
};