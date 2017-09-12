#pragma once
#include <cmath>

class Physics
{
public:
	Physics();
	~Physics();

	// Physics constants
	static double GRAVITY;

	// Calculate the terminal velocity of an object
	static double inline term_velocity(double mass, double drag_coeff, double density_of_through_fluid, double area_of_object);
	
	// Calculate the "angle of reach" of an object
	// The "angle of reach" is the angle at which a projectile must be launched in order to go a certain distance
	static double inline ang_of_reach(double go_distance, double init_velocity);
};
