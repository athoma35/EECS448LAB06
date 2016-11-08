#include "Testor.h"

using namespace::std;

Testor::Testor(){}
Testor::~Testor(){}

void Testor::testBattery()
{
	cout<<"Test battery for LinkedListofInts"<<endl;

	cout<<"1) size() initializes to 0 [Constructor/size]: ";
	if (testSizeInit())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"2) size() increments when addFront() is used: ";
	if (testSizeIncFront())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"3) size() increments when addBack() is used: ";
	if (testSizeIncBack())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"4) size() decrements when removeFront() is used: ";
	if (testSizeCycleFront())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"5) size() decrements when removeBack() is used: ";
	if (testSizeCycleBack())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"6) isEmpty() returns true on a newly initialized LLOI: ";
	if (testIsEmptyInit())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"7) isEmpty() returns false on a list with one addFront(): ";
	if (testIsEmptyIncFront())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"8) isEmpty() returns false on a list with one addBack(): ";
	if (testIsEmptyIncBack())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"9) isEmpty() returns true after one addFront and one removeFront: ";
	if (testIsEmptyCycleFront())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"10) isEmpty() returns ture after one addBack and one removeBack: ";
	if (testIsEmptyCycleBack())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"11) addFront() adds a node with the correct value to an empty list: ";
	if (testAddFrontInit())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"12) addFront() adds a node with the correct value to the front of a list: ";
	if (testAddFrontInit())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"13) addBack() adds a node with the correct value to an empty list: ";
	if (testAddBackInit())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"14) addBack() adds a node with the correct value to the back of a list: ";
	if (testAddBackCycle())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"15) removeFront() rejects on an empty list: ";
	if (testRemoveFrontInit())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"16) removeFront() removes the front node in the list: ";
	if (testRemoveFrontCycle())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"17) removeBack() rejects on an empty list: ";
	if (testRemoveBackInit())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"18) removeBack() removes the back (last) node in the list: ";
	if (testRemoveBackCycle())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"19) search() returns true for a known value in the list: ";
	if (testSearchPositive())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}

	cout<<"20) search() returns false for a value known to not be in the list: ";
	if (testSearchNegative())
	{
		cout<<"ACCEPTED\n";
	}
	else
	{
		cout<<"REJECTED\n";
	}
}

bool Testor::testIsEmptyInit()
{
	LinkedListOfInts subject;
	return (subject.isEmpty());
}

bool Testor::testIsEmptyIncFront()
{
	LinkedListOfInts subject;
	subject.addFront(5);
	cout<<"Size is reported as "<<subject.size()<<", ";
	return (subject.isEmpty() == false);
}

bool Testor::testIsEmptyIncBack()
{
	LinkedListOfInts subject;
	subject.addBack(5);
	cout<<"Size is reported as "<<subject.size()<<", ";
	return (subject.isEmpty() == false);
}

bool Testor::testIsEmptyCycleFront()
{
	LinkedListOfInts subject;
	subject.addFront(5);
	subject.removeFront();
	return (subject.isEmpty());
}

bool Testor::testIsEmptyCycleBack()
{
	LinkedListOfInts subject;
	subject.addBack(5);
	subject.removeBack();
	return (subject.isEmpty());
}

bool Testor::testSizeInit()
{
	LinkedListOfInts subject;
	return (subject.size() == 0);
}

bool Testor::testSizeIncFront()
{
	LinkedListOfInts subject;
	subject.addFront(5);
	return (subject.size() == 1);
}

bool Testor::testSizeIncBack()
{
	LinkedListOfInts subject;
	subject.addBack(5);
	return (subject.size() == 1);
}

bool Testor::testSizeCycleFront()
{
	LinkedListOfInts subject;
	subject.addFront(1);
	subject.removeFront();
	return (subject.size() == 0);
}

bool Testor::testSizeCycleBack()
{
	LinkedListOfInts subject;
	subject.addBack(1);
	subject.removeBack();
	return (subject.size() == 0);
}

bool Testor::testAddFrontInit()
{
	LinkedListOfInts subject;
	subject.addFront(5);
	if (subject.size() == 1)
	{
		vector<int> output = subject.toVector();
		if (output[0] == 5)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

bool Testor::testAddFrontCycle()
{
	LinkedListOfInts subject;
	subject.addFront(1);
	subject.addFront(2);
	subject.addFront(3);
	vector<int> output = subject.toVector();
	if (output[0] == 3)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Testor::testAddBackInit()
{
	LinkedListOfInts subject;
	subject.addBack(5);
	if (subject.size() == 1)
	{
		vector<int> output = subject.toVector();
		if (output[0] == 5)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

bool Testor::testAddBackCycle()
{
	LinkedListOfInts subject;
	subject.addBack(1);
	subject.addBack(2);
	subject.addBack(3);
	vector<int> output = subject.toVector();
	if (output[0] == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Testor::testRemoveFrontInit()
{
	LinkedListOfInts subject;
	return (!subject.removeFront());
}

bool Testor::testRemoveFrontCycle()
{
	LinkedListOfInts subject;
	subject.addFront(1);
	subject.addFront(2);
	subject.addFront(3);
	subject.removeFront();
	vector<int> output = subject.toVector();
	if (output.front() == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Testor::testRemoveBackInit()
{
	LinkedListOfInts subject;
	return (!subject.removeBack());
}

bool Testor::testRemoveBackCycle()
{
	LinkedListOfInts subject;
	subject.addFront(1);
	subject.addFront(2);
	subject.addFront(3);
	subject.removeBack();
	vector<int> output = subject.toVector();
	if (output.back() == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Testor::testSearchPositive()
{
	LinkedListOfInts subject;
	subject.addFront(1);
	subject.addFront(2);
	subject.addFront(3);
	return (subject.search(2));
}

bool Testor::testSearchNegative()
{
	LinkedListOfInts subject;
	subject.addFront(1);
	subject.addFront(2);
	subject.addFront(3);
	return (!subject.search(4));
}
