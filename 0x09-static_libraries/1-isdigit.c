#include "main.h"

/**
* _isdigit - checks for a digit from 0 to 9
* @c: character to check
* Return: 1 if a digit and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
