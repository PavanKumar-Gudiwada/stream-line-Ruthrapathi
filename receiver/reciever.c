#include <stdio.h>
#include "statistics.h"

int main()
{
	float input1, input2;
	struct results_t result;
	
	for(int i=0; i<50; i++)
	{
		scanf("%f,%f", &input1, &input2);
		result = calcStatistics(input1, input2, i);
		printStats(result);
	}
	
	return 0;
}
