#include "main.h"
/**
 * _abs - the code computes the absolute value of an integer.
 * @i: The input value to check
 * Return: int.
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = i * (-1);
		return (i);
	}
	else
		return (i);
}
