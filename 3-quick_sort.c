#include "sort.h"

int lomutoPartition(int *array, int low, int high, size_t size);
void lomutoSort(int *array, int start, int end, size_t size);

/**
 * quick_sort - Sorts an array of integers in ascending order,
 * using the Quick sort algorithm.
 *
 * @array: The array to be arranged.
 * @size: Size of the array.
*/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	lomutoSort(array, 0, size - 1, size);
}

/**
 * lomutoPartition - array partition
 *
 * @array: array to sort
 * @low: first position
 * @high: last position
 * @size: array size
 *
 * Return: int pivot index
 */
int lomutoPartition(int *array, int low, int high, size_t size)
{
	int pivot, index, forIndex, temp;

	pivot = array[high];
	index = low - 1;
	for (forIndex = low; forIndex < high; forIndex++)
	{
		if (pivot >= array[forIndex])
		{
			index += 1;
			if (index < forIndex)
			{
				temp = array[index];
				array[index] = array[forIndex];
				array[forIndex] = temp;
				print_array(array, size);
			}
		}
	}

	if (array[index + 1] > pivot)
	{
		temp = array[index + 1];
		array[index + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (index + 1);
}

/**
 * lomutoSort - sorts an array of integers recursively
 *
 * @array: array to sort
 * @start: first position
 * @end: last position
 * @size: array size
 */
void lomutoSort(int *array, int start, int end, size_t size)
{
	int partition_index;

	if (start < end)
	{
		partition_index = lomutoPartition(array, start, end, size);
		lomutoSort(array, start, partition_index - 1, size);
		lomutoSort(array, partition_index + 1, end, size);
	}
}
