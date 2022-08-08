#include <iostream>
#include <array>

void printArray(int* unsortedArray, int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << unsortedArray[i] << " ";
	}
}

int* bubbleSort(int* unsortedArray, int length)
{
	bool sorted;

	do
	{
		sorted = false;

		for (int i = 0; i < length - 1; i++)
		{

			if (unsortedArray[i] > unsortedArray[i + 1])
			{
				sorted = true;
				int temp = unsortedArray[i];
				unsortedArray[i] = unsortedArray[i + 1];
				unsortedArray[i + 1] = temp;
			}

		}
	} while (sorted);

	return unsortedArray;
}

void main()
{
	static int unsortedArr[] = { 7, 3, 4, 2, 10, 67, 2, 1 };
	
	int * sortedArray = bubbleSort(unsortedArr, std::size(unsortedArr));

	printArray(sortedArray, std::size(unsortedArr));
	
}

