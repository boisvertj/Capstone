#include "stdafx.h"
#include "Material.h"

Material::Material() {}

Material::~Material() {}

Material::MATERIAL Material::get_current_material() const
{
	return current_material;
}

void Material::set_current_material(MATERIAL current_material)
{
	this->current_material = current_material;
}
