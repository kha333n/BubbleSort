// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void BubbleSort(int *array, int size)
{
	int i, j;
	bool swaped;
	for (i=0; i<size-1; i++)
	{
		swaped = false;
		for ( j=0; j< size - i -1; j++)
		{
			if (array[j] > array[j+1])
			{
				swap(array[j], array[j+1]);
				swaped = true;
			}
		}
		//If no two elements were swapped by inner loop, then break.
		if (swaped == false)
		{
			break;
		}
	}
}
int main()
{
    int a[] = {3,1,4,81,32,13,42,12};
	int n = sizeof(a)/sizeof(n);
	BubbleSort(a,n);

	for (int i=0; i<n; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
