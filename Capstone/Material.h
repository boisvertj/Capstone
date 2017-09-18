#pragma once
#include <fstream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

struct MATERIAL {
private:
	double density;
	std::string type;
	std::string color;

public:
	MATERIAL() {}
	MATERIAL(std::string type, std::string color, double density)
	{
		this->type = type;
		this->density = density;
		this->color = color;
	}
	std::string get_color()
	{
		return color;
	}
	double get_density()
	{
		return density;
	}
	std::string get_type()
	{
		return type;
	}

	void set_color(std::string color)
	{
		this->color = color;
	}

	void set_density(double density)
	{
		this->density = density;
	}

	void set_type(std::string type)
	{
		this->type = type;
	}
};

class Material
{
public:
	Material();
	~Material();

	MATERIAL get_current_material();
	double get_density();

	void init_materials();
	void set_current_material(MATERIAL material);

	// Vector of materials
	static std::vector<MATERIAL> materials;

private:
	MATERIAL current_material;
};
