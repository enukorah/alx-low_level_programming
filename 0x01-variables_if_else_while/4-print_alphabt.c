#include <stdio.h>
/**
* main - Entry Point
* Return: Always 0 (Success)
*/

int main(void)
{
	char t;

	t = 'a';
	while
		(t <= 'z') {
			if ((t != 'q' && t != 'e') && t <= 'z')
			putchar(t);
			t++;
		}
	putchar('\n');
	return (0);
}
