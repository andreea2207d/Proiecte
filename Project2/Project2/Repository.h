#pragma once
#include <iostream>
#include <string>
#include <vector>


template <typename Entity>
class Repository {
public:
	Repository() {}
	~Repository();

	void add(Entity*);
	void remove(Entity*);

protected:
	std::vector<Entity*> mEntities;

};


template<typename Entity>
Repository<Entity>::~Repository()
{
	for (int i = 0; i < m_Entities.size(); i++) {
		delete m_Entities[i];
	}
}

template<typename Entity>
void Repository<Entity>::add(Entity *entity)
{
	m_Entities.push_back(entity);
}

template<typename Entity>
void Repository<Entity>::remove(Entity *entity)
{
	m_Entities.erase(std::remove(m_Entities.begin(), m_Entities.end(), entity), m_Entities.end());
}


