#include <stdio.h>
#include "CalcMinMax.h"
#include "statistics.h"
#include "CalcMovingAvg.h"

float averages[2] = {0.0f, 0.0f};

void printStats(float *averages, float *max, float *min)
{
	printf("Average temperature: %f\n", averages[0]);
	printf("Average SOC: %f\n", averages[1]);
	
	printf("Max Temperature: %f\n", max[0]);
	printf("Max SOC: %f\n", max[1]);
	
	printf("Min Temperature: %f\n", min[0]);
	printf("Min SOC: %f\n", min[1]);
}

void calcStatistics(float input1,float input2, int srNo)
{
	float *max, *min, *averages;
	
	if(srNo==0)
	{
		min = calcMin(0,0);//line to get pointer to min for 1st initialization
		min[0] = input1;
		min[1] = input2;
	}
	
	averages = calcMvngAvg(input1,input2,srNo+1);
	max = calcMax(input1,input2);
	min = calcMin(input1,input2);
	printStats(averages, max, min);
}

