#include "sort.h"

/**
* _qsort - sort an array by placing the pivoted index in its right index
*
*@array: array to sort
*@init: lowest index in partition array
*@final: highest index in partition array
*@size: size of original array.
*/
void _qsort(int *array, int init, int final, int size)
{
	int idx;

	if (init < final)
	{
		idx = partition(array, init, final, size);
		_qsort(array, init, idx - 1, size);
		_qsort(array, idx + 1, final, size);
	}

}


/**
 * quick_sort - quick sort
 *
 * @array: array to sort
 * @size: size of array.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	_qsort(array, 0, size - 1, size);
}

/**
 * swap - swap two value.
 *
 * @a: pointer to the first value
 * @b: pointer to the second value
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - places the pivoted number to its position in the sorted array
 *
 * @array: array to sort.
 * @low: lowest index in the array to sort.
 * @high: highest index in the array to sort.
 *@size: array size
 * Return: position of the pivoted.
 */
int partition(int *array, int low, int high, int size)
{
	int i = low, j;
	int p = array[high];

	for (j = low; j < high; j++)
	{
		if (array[j] < p)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
		return (i);
}
