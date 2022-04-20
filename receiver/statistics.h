struct results_t{
	float *max;
	float *min;
	float *averages;
};


extern void printStats(struct results_t result);

extern struct results_t calcStatistics(float input1,float input2, int srNo);
