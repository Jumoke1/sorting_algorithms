#include "sort.h"

/**
 * bubble_sort - a function to sort arrays in accending order
 * @array: the array tobe sorted
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	int swapped;
	size_t k;

		if (size < 2)
		return;

		while (swapped)
		{
			swapped = 0;

			for (k = 0; k < (size - 1); k++)
		{

			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}

		}
		}
}
