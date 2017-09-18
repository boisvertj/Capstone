#include "stdafx.h"
#include "Material.h"

std::vector<MATERIAL> Material::materials;

Material::Material()
{
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
		// Read "Materials.txt" line by line
		std::ifstream reader("Materials.txt");
		std::string line;
		while (std::getline(reader, line))
		{
			// Segment line by spaces and store in 'tokens' vector
			std::stringstream ss(line);
			std::istream_iterator<std::string> begin(ss);
			std::istream_iterator<std::string> end;
			std::vector<std::string> tokens(begin, end);

			// Add new material object to materials vector
			Material::materials.push_back(MATERIAL(tokens.at(0), tokens.at(1), std::stod(tokens.at(2))));
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
