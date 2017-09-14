#pragma once
#include "Entity.h"
#include "Material.h"

class Blob : public Entity
{
public:
	Blob();
	~Blob();

	Material::MATERIAL current_material;
};
