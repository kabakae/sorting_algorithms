#include "sort.h"

/**
 * swap_ints - swap two integers in an array
 * @a : First integer to swap
 * @b : Second integer to swap
 */


void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	/*variable is assingned to tmp *a is asssigned integer value store*/
}

/**
 * lomuto_partition - Order a subset of an array of integers
 * @array : array of integers
 * @size : size of the array
 * @left : starting index of the subset to order.
 * @right :ending index of subset to oder.
 * Return: The final partition index
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;	/*
					* pivot is pointer to an intager while
					* above an
					* below are integer variables
					*/

	pivot = array + right;
	/*
	 * The pivot variable is assigned the value of array + right, which
	 * means that it points to the memory location that is right times the
	* size of the type of the pointer away from the first element of the array.
	 */
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}
	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}
	return (above);
}
/**
 * lomuto_sort - ........
 * @array : ......
 * @size : ......
 * @left: ........
 * @right: .......
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Lomuto partition scheme. Prints
 *              the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}

