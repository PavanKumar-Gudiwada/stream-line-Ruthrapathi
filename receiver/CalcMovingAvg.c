
static float sums[2] = {0.0f, 0.0f};
static float avgs[2] = {0.0f, 0.0f};

float* calcMvngAvg(float input1, float input2,int count)
{
	sums[0] += input1;	
	sums[1] += input2;	
	
	avgs[0] = sums[0] / count;
	avgs[1] = sums[1] / count;
	
	return avgs;
}
