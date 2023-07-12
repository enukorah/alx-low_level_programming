#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if c is uppercase
 *
 * @c: input for character to check
 *
 * Return: 1 if its uppercase, 0 if it is not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
