#include <stdio.h>
#include "main.h"

/**
 * _isupper -Function returns 1 if upper else 2
 * @c: alphabet to be checked
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);

}
