#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <cmath>

#define GRAVITY 9.8066

class Physics
{
public:
	Physics();
	~Physics();

	/** Calculate the terminal velocity of an object
	 * \param mass
	 * \param drag coefficient
	 * \param density of fluid being traversed
	 * \param area of object
	 */
	static double inline term_velocity(double mass, double drag_coeff, double density_of_through_fluid, double area_of_object);
	
	/** Calculate the "angle of reach" of an object
	 * The "angle of reach" is the angle at which a projectile must be launched in order to go a certain distance
	 * \param go_distance - The distance the object needs to travel
	 * \param init_velocity - The object's initial velocity
	 */
	static double inline ang_of_reach(double go_distance, double init_velocity);

	/** Calculate the final velocity of an object
	 * \param time - Amount of time object is moving
	 * \param init_velocity - The object's initial velocity
	 */
	static double inline get_velocity(double time, double init_velocity);
};
