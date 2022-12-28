#include "sort.h"

/**
 * swap - function
 * @a: int ptr
 * @b: int ptr
*/
void	swap(int *a, int *b)
{
	int	v;

	v = *a;
	*a = *b;
	*b = v;
}

/**
 * quick_sort_partition - function
 * @a: []int
 * @l: size_t
 * @h: size_t
 * @s: size_t
 *
 * Return: size_t
*/
size_t	quick_sort_partition(int *a, size_t l, size_t h, size_t s)
{
	size_t	x;
	size_t	y;
	int	p;

	p = a[h];
	x = l - 1;
	for (y = l; y < h; y++)
	{
		if (a[y] < p)
		{
			if (++x != y)
			{
				swap(&a[x], &a[y]);
				print_array(a, s);
			}
		}
	}
	if (a[x + 1] > a[h])
	{
		swap(&a[x + 1], &a[h]);
		print_array(a, s);
	}
	return (x + 1);
}

/**
 * quick_sort_runtime - function
 * @a: []int
 * @l: int
 * @h: int
 * @s: size_t
*/
void	quick_sort_runtime(int *a, int l, int h, size_t s)
{
	size_t	p;

	if (l < h)
	{
		p = quick_sort_partition(a, l, h, s);
		quick_sort_runtime(a, l, p - 1, s);
		quick_sort_runtime(a, p + 1, h, s);
	}
}

/**
 * quick_sort - function
 * @array: []int
 * @size: size_t
*/
void	quick_sort(int *array, size_t size)
{
	if (array == 0)
		return;
	if (size < 2)
		return;
	quick_sort_runtime(array, 0, size - 1, size);
}
