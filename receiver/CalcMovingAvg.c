
static float sums[2] = {0.0f, 0.0f};
static float avgs[2] = {0.0f, 0.0f};

static float buffer1[5] = {0.0f,0.0f,0.0f,0.0f,0.0f};
static float buffer2[5] = {0.0f,0.0f,0.0f,0.0f,0.0f};

void storeBuffer(float input1, float input2)
{
	buffer1[4] = buffer1[3];
	buffer1[3] = buffer1[2];
	buffer1[2] = buffer1[1];
	buffer1[1] = buffer1[0];
	buffer1[0] = input1;
	
	buffer2[4] = buffer2[3];
	buffer2[3] = buffer2[2];
	buffer2[2] = buffer2[1];
	buffer2[1] = buffer2[0];
	buffer2[0] = input2;
}

float sumBuffer(float * bufferPtr)
{
	float sum = 0;
	for(int i = 0; i<5; i++)
	{
		sum += bufferPtr[i];
	}
	return sum;
}

float* calcMvngAvg(float input1, float input2)
{
	storeBuffer(input1, input2);
	
	sums[0] = sumBuffer(buffer1);
	sums[1] = sumBuffer(buffer2);
	
	avgs[0] = sums[0] / 5.0F;
	avgs[1] = sums[1] / 5.0F;
	
	return avgs;
}
