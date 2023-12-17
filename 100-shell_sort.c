#include "sort.h"

/**
 * shell_sort - sort array using Knut sequence
 *
 * @array: array to sort.
 * @size: size of the array.
 */
void shell_sort(int *array, size_t size)
{
	size_t intv, i, j;
	int tmp;

	if (!array || size < 2)
		return;
	intv = 1;
	while (intv < size / 3)
		intv = (intv * 3) + 1;
	while (intv)
	{
		for (i = intv; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= intv && array[j - intv] > tmp; j -= intv)
			{
				array[j] = array[j - intv];
			}
			array[j] = tmp;
		}
		print_array(array, size);
		intv /= 3;
	}
}
}