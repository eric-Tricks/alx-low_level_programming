#include "main.h"
/**
 * swap_int - function swaps the value of a to b an viceverser
 *@a: integer value to be swaped with value of b
 *@b: integer value to be swaped with value of a
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
