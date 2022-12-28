#include "sort.h"

/**
 * selection_sort - function
 * @array: []int, array to sort
 * @size: size_t, array size
 */
void	selection_sort(int *array, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	m;
	int	t;

	if (array == 0)
		return;
	if (size < 2)
		return;
	for (x = 0; x < size; x++)
	{
		m = x;
		for (y = x + 1; y < size; y++)
			if (array[y] < array[m])
				m = y;
		if (m != x)
		{
			t = array[m];
			array[m] = array[x];
			array[x] = t;
			print_array(array, size);
		}
	}
}
