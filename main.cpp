#include <iostream>
#include <array>

void main()
{
	int unsortedArr[] = { 7, 3, 4, 2, 10, 67, 2, 1 };
	
	bool sorted;

	do
	{
		sorted = false;

		for (int i = 0; i < std::size(unsortedArr) - 1; i++)
		{

			if (unsortedArr[i] > unsortedArr[i + 1])
			{
				sorted = true;
				int temp = unsortedArr[i];
				unsortedArr[i] = unsortedArr[i + 1];
				unsortedArr[i + 1] = temp;
			}

		}
	} while (sorted);

	for (int i = 0; i < std::size(unsortedArr); i++)
	{
		std::cout << unsortedArr[i] << " ";
	}
}

