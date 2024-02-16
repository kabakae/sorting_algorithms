#include <stdio.h>
#include "sort.h"


/**
 * print_list - prints a list of integers
 *
 * @list: list to be printed
 *
 */
void  print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)/* starts a loop that continues as long as  list is not NULL.
*/
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);/* Prints the value of the n member of
			*the node using %d formart specifier for printing integers.
			*/
		++i;
		list = list->next;
	}
	printf("\n");
}
