#include <stdio.h>
#include "CalcMinMax.h"
#include "statistics.h"
#include "CalcMovingAvg.h"

static float averages[2] = {0.0f, 0.0f};

void printStats(struct results_t result)
{
	printf("Temperature-> ");
	printf("Average: %f ", result.averages[0]);
	printf("Max: %f ", result.max[0]);
	printf("Min: %f\n", result.min[0]);
	
	printf("SOC-> ");
	printf("Average: %f ", result.averages[1]);
	printf("Max: %f ", result.max[1]);
	printf("Min: %f\n", result.min[1]);
}

struct results_t calcStatistics(float input1,float input2, int srNo)
{
	struct results_t result;

	if(srNo==0)
	{
		result.min = calcMin(0,0);//line to get pointer to min for 1st initialization
		result.min[0] = input1;
		result.min[1] = input2;
	}
	
	storeBuffer(input1,input2);
	result.averages = calcMvngAvg(input1,input2);
	result.max = calcMax(input1,input2);
	result.min = calcMin(input1,input2);
	
	return result;
}

