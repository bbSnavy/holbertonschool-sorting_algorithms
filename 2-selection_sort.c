#include "sort.h"

/**
 * selection_sort - function
 * @array: array to sort
 * @size: array size
 */

void selection_sort(int *array, size_t size)
{
	int i, j, min, temp;

	if (array == 0 || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				if (min != i)
				{
					temp = array[min];
					array[min] = array[i];
					array[i] = temp;
					print_array(*array, size);
				}
			}
		}
	}
}