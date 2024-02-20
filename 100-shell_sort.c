#include "sort.h"

/**
 * swap_ints - it swap two integers in an array.
 * @a: First integer to swap.
 * @b: Second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;/* ASSINGS VARIABLE TO TMP */

	tmp = *a; /* VARIABLE IS ASSINGED TO *a */
	*a = *b;
	*b = tmp;/*VARIABLE STORED IN *b IS ASSIGNED TO *b */

}

/**
 * shell_sort - Sort an array of integers in ascending
 * @array: array of integers.
 * @size: size of the array.
 *
 * Description: Uses Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;
/* if statement checkswhether array is null or size of the array islessthan 2*/

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
/* for loop */
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_ints(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
/*
 * After each iteration of the gap reduction loop, the function prints the
 * current state of the array using the print_array function.
 */
	}
}
