// CountToForty.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>



struct carousel {
	std::vector<int> outerRing;
	std::vector<int> innerRing;
	bool bottomPlate;
};

int INDEX_COUNT = 16;

int sumColumn(const carousel& plateOne, int indexOne, const carousel& plateTwo, int indexTwo, const carousel& plateThree, int indexThree, const carousel& plateFour, int indexFour)
{
	int returnValue = 0;
	returnValue += plateOne.outerRing[indexOne];

	if (indexTwo % 2 != 0) {
		returnValue += plateOne.innerRing[indexOne]
	}
	else {
		returnValue += plateTwo.outerRing[indexTwo];
	}

	returnValue += plateThree.outerRing[indexThree];

	if (indexThree % 2 != 0) {
		returnValue += plateTwo.innerRing[indexTwo];
	}

	returnValue += plateFour.outerRing[indexFour];

	if (indexTwo % 2 != 0) {
		returnValue += plateThree.innerRing[indexThree];
	}

	return returnValue;
}

int main()
{
	int zeroA[] = {27,10,19,10,13,10,2,15,23,19,3,2,3,27,20,11 };
	int zeroB[] = { 7,3,12,24,10,9,22,9,5,10,5,1,24,2,10,9};

	int oneA[] = {17,0,2,0,2,0,10,0,15,0,6,0,9,0,16,0};
	int oneB[] = {14,5,5,7,8,24,8,3,6,15,22,6,1,1,11,27};

	int twoA[] = {22,0,2,0,17,0,15,0,14,0,5,0,10,0,2,0};
	int twoB[] = {10,2,6,10,4,1,5,5,4,8,6,3,1,6,10,6};

	int threeA[] = {13,0,3,0,3,0,6,0,10,0,10,0,10,0,6,0};
	int threeB[] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

	carousel bottomPlate;
	bottomPlate.outerRing = std::vector<int>(zeroA, zeroA + sizeof(zeroA) / sizeof(int));
	bottomPlate.innerRing = std::vector<int>(zeroB, zeroB + sizeof(zeroB) / sizeof(int));
	bottomPlate.bottomPlate = true;

	carousel secondPlate;
	secondPlate.outerRing = std::vector<int>(oneA, oneA+ sizeof(oneA) / sizeof(int));
	secondPlate.innerRing = std::vector<int>(oneB, oneB + sizeof(oneB) / sizeof(int));
	secondPlate.bottomPlate = false;

	carousel thirdPlate;
	thirdPlate.outerRing = std::vector<int>(twoA, twoA + sizeof(twoA) / sizeof(int));
	thirdPlate.innerRing = std::vector<int>(twoB, twoB + sizeof(twoB) / sizeof(int));
	thirdPlate.bottomPlate = false;

	carousel fourthPlate;
	fourthPlate.outerRing = std::vector<int>(threeA, threeA + sizeof(threeA) / sizeof(int));
	fourthPlate.innerRing = std::vector<int>(threeB, threeB + sizeof(threeB) / sizeof(int));
	fourthPlate.bottomPlate = false;



	for (int i = 0; i < INDEX_COUNT; i++)
	{
		for (int j = 0; j < INDEX_COUNT; j++)
		{
			for (int k = 0; k < INDEX_COUNT; k++)
			{

			}
		}
	}

    return 0;
}

