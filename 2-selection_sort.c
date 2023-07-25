#include "sort.h"

/**
 * swap_ints - function tha swap two integers in an array.
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
 * selection_sort - function that ort an array of integers
 * @array: array of integers.
 * @size: size of the array.
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t a;
	size_t b;

	if (!array || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		min = array + a;
		for (b = a + 1; b < size; b++)
			min = (array[b] < *min) ? (array + b) : min;

		if ((array + a) != min)
		{
			swap_ints(array + a, min);
			print_array(array, size);
		}
	}
}
