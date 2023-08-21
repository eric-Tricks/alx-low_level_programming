#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of the string passed to it
 * @s: the string passed to the function
 * Return: value of length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
