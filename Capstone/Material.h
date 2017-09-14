#pragma once

class Material
{
public:

	static enum MATERIAL { DEFAULT, LEAD, RUBBER };

	Material();
	~Material();

	MATERIAL get_current_material() const;
	void set_current_material(MATERIAL material);

private:
	MATERIAL current_material;
};
