#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort
 * @array: array to be sorted
 * @size: length of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = size - 1, j = 0;
	int temp;

	if (array == NULL)
		return;
	for (; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
