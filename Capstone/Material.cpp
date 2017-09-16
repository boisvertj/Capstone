#include "stdafx.h"
#include "Material.h"

Material::Material() {
	// Measured in grams per cm^3
	LEAD.density = 11.34;
	LEAD.type = "LEAD";

	DEFAULT_GOO.density = 3.50;
	DEFAULT_GOO.type = "DEFAULT_GOO";

	RUBBER.density = 0.11;
	RUBBER.type = "RUBBER";

	current_material = DEFAULT_GOO;
}

Material::~Material() {}

MATERIAL Material::get_current_material()
{
	return current_material;
}

double Material::get_density()
{
	return current_material.density;
}

void Material::set_current_material(MATERIAL current_material)
{
	this->current_material = current_material;
}

