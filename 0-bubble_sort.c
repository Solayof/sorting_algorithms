#include "sort.h"

/**
 * bubble_sort - function that us bubble sort to sort.
 *
 *@array: array to sort
 * @size: size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	int tmp, flag = 1;
	size_t j;

	while (flag)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				flag = 1;
			}
		}
	}
}
