#include <iostream>
#include "QuickSort.h"
using namespace std;

int main()
{
	const int INTS_LENGTH = 5;
	int myInts[INTS_LENGTH] = { 3, 2, 4, 1, 5 };

	const int FLOATS_LENGTH = 5;
	float myFloats[FLOATS_LENGTH] = { 0.4f, 6.0f, 3.0f, 1.0f, 7.3f };

	QuickSort::qSort(myInts, INTS_LENGTH);
	QuickSort::qSort(myFloats, FLOATS_LENGTH);

	for (int Elem : myInts)
	{
		cout << Elem << endl;
	}

	for (float Elem : myFloats)
	{
		cout << Elem << endl;
	}

	return 0;
}