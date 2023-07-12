#include "main.h"
#include<string.h>
/**
 * _strncpy -  function that copies a string..
 * @src: input for value
 * @dest: input value.
 * @n: input number.
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
