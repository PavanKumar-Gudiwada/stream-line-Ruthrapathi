#include <stdio.h>
#include "statistics.h"

int main()
{
	float input1, input2;
	struct results_t result;
	
	for(int i=0; i<50; i++)
	{
		scanf("\n{\"Temperature\":%f,\"SOC\":%f}", &input1, &input2);
		result = calcStatistics(input1, input2, i);
		printStats(result);
	}
	
	return 0;
}
