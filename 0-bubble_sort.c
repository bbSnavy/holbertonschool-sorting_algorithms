#include "sort.h"

/**
 * bubble_sort - function
 * @array: []int
 * @size: size_t
*/
void	bubble_sort(int *array, size_t size)
{
	uint64_t	x;
	uint64_t	s;
	int		v;

	while (1)
	{
		s = 0;
		for (x = 0; x < size - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				v = array[x];
				array[x] = array[x + 1];
				array[x + 1] = v;
				print_array(array, size);
				s++;
			}
		}
		if (s == 0)
			break;
	}
}
