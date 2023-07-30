#include "sort.h"

/**
 * partition - Partitions the array using Lomuto partition scheme
 * @array: Pointer to the array to be partitioned
 * @size: Size of the array
 * @low: Starting index of the partition to be sorted
 * @high: Ending index of the partition to be sorted
 *
 * Return: Index of the pivot element
 */
int partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low - 1, j, temp;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if ((i + 1) != high)
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * sort - quick sort using recursion
 * @array: the array
 * @size: size of array
 * @low: low
 * @high: high
 */
void sort(int *array, size_t size, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, size, low, high);
		sort(array, size, low, pivot - 1);
		sort(array, size, pivot + 1, high);
	}
}


/**
 * quick_sort - sorts using quick sort algorithm
 * @array: the array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort(array, size, 0, size - 1);
}
