#include "sort.h"

void qsort(int *array, int init, int final, size_t size)
{
	size_t idx;

	if (init < final)
	{
		idx = 
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
	size_t flag = 0, idx = 0, low = 0;

	if (low < size)
	{
		if (flag == 0) /*flag not set*/
		{
			idx = partition(array, low, size);
			flag = 1; /*set flag*/
		}
		else
		{
			if (size > idx)
			{
				low = idx + 1;
				idx = partition(array, low, size);
			}
			else
			{
				low = 0;
				idx = partition(array, low, size);
			}
		}

		quick_sort(array, idx);
		quick_sort(array, size);
	}
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
 * Return: position of the pivoted.
 */
int partition(int *array, size_t low, size_t high)
{
	size_t i = low - 1, j;

	for (j = low; j < high - 1; j++)
	{
		if (array[j] < array[high])
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
		return (i + 1);
}
