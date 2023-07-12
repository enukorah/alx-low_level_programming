#include "main.h"
/**
* _isalpha - code checks for alphabetic character.
*@c: The input that is  character to check
* Return: int.
*
*/

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
return (0);
}
