#include "main.h"
/**
 * print_alphabet - Prints alhabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i<= 122; 1++)
	{
		_putchar(i);
	}
	_putchar ('\n');
}

