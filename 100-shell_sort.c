#include "sort.h"
/**
 * swap_ints - function swap two integers
 * @x: first integer
 * @y: second integer
 * Return: void
 */
void swap_ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}
/**
 * shell_sort - functio that sort an array of integers
 * @array: array
 * @size: size of the array.
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, a;

	if (!array || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			a  = i;
			while (a >= gap && array[a - gap] > array[a])
			{
				swap_ints(array + a, array + (a - gap));
				a -= gap;
			}
		}
		print_array(array, size);
	}
}
