#include "main.h"
/**
 *a function that prints the last digit of a number.
 */
int print_last_digit(int);
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-1 + 48);
		return (-1)
	}
	else
	{
		_putchar(l + 48);
		return (1);
	}
}
