#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order,
 * using Selection sort algorithm.
 *
 * @array: The array to be sorted.
 * @size: Size of the array.
*/
void selection_sort(int *array, size_t size)
{
	size_t upperFor, innerFor, lowerInt_index;
	int lowerInt;

	if (size < 2)
		return;

	for (upperFor = 0; upperFor < size - 2; upperFor++)
	{
		lowerInt = array[upperFor];
		lowerInt_index = upperFor;
		for (innerFor = upperFor + 1; innerFor < size; innerFor++)
		{
			if (lowerInt > array[innerFor])
			{
				lowerInt = array[innerFor];
				lowerInt_index = innerFor;
			}
		}
		if (array[upperFor] != lowerInt)
		{
			array[lowerInt_index] = array[upperFor];
			array[upperFor] = lowerInt;
			print_array(array, size);
		}
	}
}
