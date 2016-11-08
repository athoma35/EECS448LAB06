#ifndef TESTOR_H
#define TESTOR_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"


class Testor
{
public:
	Testor();
	~Testor();
	void testBattery();

private:
	bool testIsEmptyInit(); //PASSED
	bool testIsEmptyIncFront(); //FAILURE - isEmpty just returns true
	bool testIsEmptyIncBack(); //FAILURE - isEmpty just returns true
	bool testIsEmptyCycleFront(); //FAILURE - see removeFront
	bool testIsEmptyCycleBack(); //FAILURE - see removeBack
	bool testSizeInit(); //PASSED
	bool testSizeIncFront(); //PASSED
	bool testSizeIncBack(); //PASSED
	bool testSizeCycleFront(); //FAILURE - see removeFront
	bool testSizeCycleBack(); //FAILURE - see removeBack
	bool testAddFrontInit(); //PASSED
	bool testAddFrontCycle(); //PASSED
	bool testAddBackInit(); //PASSED
	bool testAddBackCycle(); //FAILURE - addBack adds to the front of the list, making this a stack with two push functions
	bool testRemoveFrontInit(); //PASSED
	bool testRemoveFrontCycle(); //FAILURE - Does not remove node at all (see isEmpty, size)
	bool testRemoveBackInit(); //PASSED
	bool testRemoveBackCycle(); //FAILURE - Does not remove node at all (see isEmpty, size)
	bool testSearchPositive(); //PASSED
	bool testSearchNegative(); //PASSED
};

#endif
