#include "stdafx.h"
#include "Neuron.h"

Neuron::Neuron() {}

Neuron::~Neuron() {}

double Neuron::sigmoid(double weights_and_bias)
{
	return (1 / (1 + pow(MATH_E, -weights_and_bias)));
}
