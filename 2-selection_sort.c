#include "sort.h"

/**
 * selection_sort - selects the smallest and place it at lowest index
 *
 * @array: array to sort
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int val;

	for (i = 0; i < size - 1; i++)
	{
		val = array[i];
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (val > array[j])
			{
				val = array[j];
				idx = j;
			}
		}
		if (idx != i)
		{
			array[idx] = array[i];
			array[i] = val;
			print_array(array, size);
		}
	}
}
