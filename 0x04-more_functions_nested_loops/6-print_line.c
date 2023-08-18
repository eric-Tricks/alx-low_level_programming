#include "main.h"

/**
 * print_line - prints line on termnal based on n value
 *@n: the number of __ to print
 * Return: Always 0.
 */
void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
			_putchar('_');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
