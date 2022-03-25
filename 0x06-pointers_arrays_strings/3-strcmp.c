#include "main.h"

/**
 * _strcmp - Concatenates two strings
 * @s1: Input string
 * @s2: Input string
 *
 * Return: The difference s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*si - *s2);
		}
		s1++, s2++;
	}
	return (*s1 - *s2);
}
