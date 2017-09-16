/*
 * Capstone Project
 * Author: Jason Boisvert
 */
#include "stdafx.h"

#include "Material.h"
#include <string>

int main(int argc, char *argv[])
{
	std::cout << "Hello World!" << std::endl;

	Material* m = new Material();
	std::cout << m->get_current_material().get_type() << std::endl;

	m->set_current_material(m->LEAD);
	std::cout << m->get_current_material().get_type() << std::endl;
	std::cout << m->get_current_material().get_density() << std::endl;

    return 0;
}
