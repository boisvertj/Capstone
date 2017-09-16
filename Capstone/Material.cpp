#include "stdafx.h"
#include "Material.h"

Material::Material() {


	// TODO:
	// Make "init_materials" method that reads from a text file a list of materials and their simple properties so you
	// don't have to make an extremely long method that is just the same code over and over again. Just list the different
	// material names as "MATERIAL" objects in the Material.h like the LEAD, DEFAULT_GOO, and RUBBER


	// Measured in grams per cm^3
	LEAD.set_density(11.34);
	LEAD.set_type("LEAD");

	DEFAULT_GOO.set_density(3.50);
	DEFAULT_GOO.set_type("DEFAULT_GOO");

	RUBBER.set_density(0.11);
	RUBBER.set_type("RUBBER");

	current_material = DEFAULT_GOO;

	init_materials();
}

Material::~Material() {}

MATERIAL Material::get_current_material()
{
	return current_material;
}

double Material::get_density()
{
	return current_material.get_density();
}

void Material::init_materials()
{
	try
	{
		std::ifstream reader("Materials.txt");
		std::string line;
		while (std::getline(reader, line))
		{
			//TESTING
			std::cout << "\nReading materials and their properties from file" << std::endl;
			std::cout << line << std::endl;
		}
	}
	catch (const std::exception & e)
	{
		std::cerr << "ERROR::MATERIALS.TXT PROPERTIES FILE NOT FOUND" << std::endl;
		std::cerr << e.what() << std::endl;
	}
}

void Material::set_current_material(MATERIAL current_material)
{
	this->current_material = current_material;
}

