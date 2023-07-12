#include "main.h"

/**
 * _memset -fill memory with constant specific values
 * @s: pointer to char params
 * @b: constant byte
 * @n: byte of mem area to be changed
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
