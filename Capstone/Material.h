#pragma once
#include <fstream>
#include <string>

struct MATERIAL {
	enum COLOR { LIGHT_BLUE, SILVER, PINK };

private:
	COLOR color;
	double density;
	std::string type;

public:
	MATERIAL() {}
	COLOR get_color()
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

	void set_color(COLOR color)
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

	// List of materials
	MATERIAL DEFAULT_GOO;
	MATERIAL LEAD;
	MATERIAL RUBBER;

private:
	MATERIAL current_material;
};
