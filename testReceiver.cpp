#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"

#include "receiver/statistics.h"
#include "receiver/CalcMovingAvg.h"

TEST_CASE("test with 3 sets of sensor input values") {
  float input1, input2;
	struct results_t result;
	
	input1 = 1;
	input2 = 1;
	result = calcStatistics(input1, input2, 0);
	printStats(result);
  
  
  	REQUIRE(result.averages[0] == 0.2F);
	REQUIRE(result.averages[1] == 0.2F);
	
	REQUIRE(result.max[0] == 1);
	REQUIRE(result.max[1] == 1);
	
	REQUIRE(result.min[0] == 1);
	REQUIRE(result.min[1] == 1);
	
	input1 = 2;
	input2 = 2;
	result = calcStatistics(input1, input2, 1);
	printStats(result);
  
  	REQUIRE(result.averages[0] == 0.6F);
	REQUIRE(result.averages[1] == 0.6F);
	
	REQUIRE(result.max[0] == 2);
	REQUIRE(result.max[1] == 2);
	
	REQUIRE(result.min[0] == 1);
	REQUIRE(result.min[1] == 1);
  
	input1 = 3;
	input2 = 3;
	result = calcStatistics(input1, input2, 2);
	printStats(result);
  
  	REQUIRE(result.averages[0] == 1.2F);
	REQUIRE(result.averages[1] == 1.2F);
	
	REQUIRE(result.max[0] == 3);
	REQUIRE(result.max[1] == 3);
	
	REQUIRE(result.min[0] == 1);
	REQUIRE(result.min[1] == 1);
}

TEST_CASE("test summing of buffer") {
  float arr[5] = {1,2,3,4,5}, sum = 0;
	sum = sumBuffer(arr);
	REQUIRE(sum == 15 );
}
