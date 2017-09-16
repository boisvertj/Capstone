#include "stdafx.h"
#include "Entity.h"

Entity::Entity() {}

Entity::~Entity() {}

glm::vec2 Entity::get_position() const
{
	return position;
}

void Entity::set_position(glm::vec2 position)
{
	this->position.x = position.x;
	this->position.y = position.y;
}
