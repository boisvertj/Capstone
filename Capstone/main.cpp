/*
 * Capstone Project
 * Author: Jason Boisvert
 */
#include "stdafx.h"

// TESTING
#include "Material.h"
#include "Neuron.h"

int main(int argc, char *argv[])
{
	// TESTING
	Material m = Material();
	auto set = Material::materials;
	for (auto iter = set.begin(); iter != set.end(); iter++)
	{
		std::cout << (*iter).get_type() << " " << (*iter).get_density() << " " << (*iter).get_color() << std::endl;
	}

	std::cout << "Sigmoid (4.0): " << Neuron::sigmoid(4.0) << std::endl;

    return 0;
}
