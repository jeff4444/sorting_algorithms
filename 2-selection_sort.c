#include "sort.h"

/**
 * selection_sort - sorts using selection sort
 * @array: the array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, n = 0;
	int min;

	if (array == NULL)
		return;
	for (; n < size; n++)
	{
		min = array[n];
		for (i = n; i < size; i++)
		{
			if (array[i] < min)
			{
				array[n] = array[i];
				array[i] = min;
				min = array[n];
				print_array(array, size);
			}
		}
	}
}
