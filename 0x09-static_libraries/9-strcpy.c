#include "main.h"
#include <string.h>
/**
*_strcpy - code copies the string pointed to by src.
*@src: pointer.
*@dest: pointer.
*Return: the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
