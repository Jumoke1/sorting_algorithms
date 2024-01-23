
#include "sort.h"
/**
 * swap_num - swap numbers
 * @num1: first num
 * @num2: second num
 * @array: array
 * Return: void
 */

void swap_num(int *array, int num1, int num2)
{
	int *ptr = array;
	int temp;

	temp = ptr[num1];
	ptr[num1] = ptr[num2];
	ptr[num2] = temp;
}

/**
 * selection_sort - a function thatsort integers using selxcetion sort
 * @array: the array to b sorted
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	int i, j;
	int min;
	int length = size;

		if (size < 2)
			return;
	for (i = 0; i < length - 1; i++)
	{
		min = i;
			for (j = i + 1; j < length; j++)
			{
				if (array[j] < array[min])
					min = j;

			}

			if (min != i)
			{
				swap_num(array, min, i);
				print_array(array, size);
			}
	}
}
