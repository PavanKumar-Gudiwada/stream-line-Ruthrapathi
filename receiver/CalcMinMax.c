#include "CalcMinMax.h"

static float maxima[2], minima[2];

float* calcMax(float input1, float input2)
{
	maxima[0] = MAXIMUM(input1,maxima[0]);
	maxima[1] = MAXIMUM(input2,maxima[1]);
	return maxima;
}

float* calcMin(float input1, float input2)
{
	minima[0] = MINIMUM(input1,minima[0]);
	minima[1] = MINIMUM(input2,minima[1]);
	return minima;
}
