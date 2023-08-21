#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an integer array followed by a new line
 * @a: Pointer to the array of integers
 * @n: Number of elements to be printed
 *
 * Description: This function takes a pointer to an array of integers and the
 * number of elements `n` as parameters. It prints the first `n` elements of
 * the array, separated by commas and spaces, followed by a new line.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
