#pragma once

#include <iostream>
using namespace std;

class QuickSort
{

public:
	template<class T>
	static void qSort(T arrayToSort[], int arraySize)
	{
		qSort_Helper(arrayToSort, 0, arraySize - 1);
	}

private:
	template<class T>
	static void qSort_Helper(T arrayToSort[], int low, int high)
	{
		if (low >= high)
		{
			return;
		}

		int pivotIdx = partition(arrayToSort, low, high);

		qSort_Helper(arrayToSort, low, pivotIdx - 1);
		qSort_Helper(arrayToSort, pivotIdx + 1, high);
	}

	template<class T>
	static int partition(T arrayToSort[], int low, int high)
	{
		T* pivot = &arrayToSort[high];
		int pivotIdx = low;

		for (int arrayToSortIdx = low; arrayToSortIdx < high; arrayToSortIdx++)
		{
			if (arrayToSort[arrayToSortIdx] < *pivot)
			{
				swap(&arrayToSort[pivotIdx], &arrayToSort[arrayToSortIdx]);
				pivotIdx++;
			}
		}

		swap(&arrayToSort[pivotIdx], &arrayToSort[high]);
		return pivotIdx;
	}

	template<class T>
	static void swap(T* Element1, T* Element2)
	{
		T temp = *Element1;
		*Element1 = *Element2;
		*Element2 = temp;
	}
};

#include "QuickSort.cpp"