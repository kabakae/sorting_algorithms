#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Print an array of integers
 *
 * @array: array to be printed
 * @size: Number of element in array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size) /* starts a loop that continues as long as
* both array is not 'NULL' and i is less than 'size'. The loop is used to print
*elements of the array
*/
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);/* prints the current element of array
*using the %d format specifier, which is used for printing integers. The
*array[i] expression accesses the current element of the array using the loop
*counter 'i'
*/
		++i;
	}
	printf("\n");
}
