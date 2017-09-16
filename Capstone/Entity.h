#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Entity
{
public:
	Entity();
	~Entity();

	glm::vec2 get_position() const;
	void set_position(glm::vec2 position);

private:
	glm::vec2 position;
};
