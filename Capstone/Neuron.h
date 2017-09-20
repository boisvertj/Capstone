#pragma once

#define MATH_E 2.71828

class Neuron
{
public:
	Neuron();
	~Neuron();

	/** Sigmoid activation method for calculating whether or not a neuron will fire
	 * \param weights_and_bias - weighted sum of inputs and a bias value
	 */
	static double sigmoid(double weights_and_bias);
};
