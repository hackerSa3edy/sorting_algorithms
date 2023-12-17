#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using,
 * the Bubble sort algorithm.
 *
 * @array: The array to be sorted.
 * @size: Size of the array.
*/
void bubble_sort(int *array, size_t size)
{
	size_t upperFor, innerFor, sorted;
	int holder;

	if (size < 2)
		return;

	for (upperFor = 0; upperFor < size - 1; upperFor++)
	{
		sorted = 1;
		for (innerFor = 0; innerFor < size - upperFor - 1; innerFor++)
		{
			if (array[innerFor] > array[innerFor + 1])
			{
				sorted = 0;
				holder = array[innerFor];
				array[innerFor] = array[innerFor + 1];
				array[innerFor + 1] = holder;
				print_array(array, size);
			}

		}
		if (sorted == 1)
			break;
	}
}
