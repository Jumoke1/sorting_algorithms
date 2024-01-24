#include "sort.h"

/**
 * swap - Swap integers value
 * @val1: pointer to the first value
 * @val2: pointer to the second val
 */
void swap(int *val1, int *val2)
{
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

/**
 * lomuto_partition -  a functiom to partition the array
 * @array: array to be partitioned
 * @low: low index of the partition
 * @high: high index of the partion
 * @size: size of array
 * Return: null
 */

int lomuto_partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int i = low;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i < j)
			{
			swap(&array[i], &array[j]);
			print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] > array[high])
	{
	swap(&array[i], &array[high]);
	print_array(array, size);
	}
	return (i);
}
/**
 * quicksort - Sorts an array using Quick Sort
 * @array: ==
 * @low: ==
 * @high: ==
 * @size: ==
 */

void quicksort(int *array, int low, int high, int size)
{
	if (high - low > 0)
	{
		int pivot  = lomuto_partition(array, low, high, size);

	quicksort(array, low, pivot - 1, size);
	quicksort(array, pivot + 1, high, size);

	}
}
/**
 * quick_sort - a function to sort integers using quick sort
 * @array: array
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
