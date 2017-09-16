#pragma once

struct MATERIAL {
	double density;
	std::string type;
	MATERIAL() {}
	std::string get_type() {
		return type;
	}
};

class Material
{
public:
	Material();
	~Material();

	MATERIAL get_current_material();
	double get_density();

	void set_current_material(MATERIAL material);

	// List of materials
	MATERIAL DEFAULT_GOO;
	MATERIAL LEAD;
	MATERIAL RUBBER;

private:
	MATERIAL current_material;
};
