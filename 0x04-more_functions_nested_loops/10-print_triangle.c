#include "main.h"

/**
 * print_triangle - prints out triangle based on number given
 * @size: triangle size to be drawn
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
			if (j != i - 1)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
