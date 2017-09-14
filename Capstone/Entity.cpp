#include "stdafx.h"
#include "Entity.h"

Entity::Entity() {}

Entity::~Entity() {}

glm::vec3 Entity::get_position() const
{
	return position;
}

void Entity::set_position(glm::vec3 position)
{
	this->position.x = position.x;
	this->position.y = position.y;
	this->position.z = position.z;
}
