#include "stdafx.h"
#include "Physics.h"

double GRAVITY = 9.8066;

Physics::Physics() {}

Physics::~Physics() {}

inline double Physics::term_velocity(double mass, double drag_coeff, double density_of_through_fluid, double area_of_object)
{
	double term_vel = sqrt((2 * mass * Physics::GRAVITY) / (density_of_through_fluid * area_of_object * drag_coeff));
	return term_vel;
}

inline double Physics::ang_of_reach(double go_distance, double init_velocity)
{
	double angle = 0.5 * asin((Physics::GRAVITY * go_distance) / pow(init_velocity, 2));
	return angle;
}
