#include "sort.h"

/**
 * swap_ints - swap two integers
 * @a: first integer to swapi
 * @b: second integer to swap
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp; /*tmp is used to store integer variable which is stored into
	*a. Then the value of *b is assigned to variable pointed by 'a'.
	The value of tmp is then assigned to the varliable pointed by 'b'
	*/
}

/**
 * bubble_sort - sort array of integer in ascending order.
 * @array: integers to sort in the array
 * @size: size of the array with the integers
 * Description: Prints array after  every swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;


	if (array == NULL || size < 2) /*this is a conditional statement which checks
*whether array pointer is null or the size of  the array is less than 2. if the
*condition is true it returns immediately as there is nothing to sort
*/
		return;
	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
