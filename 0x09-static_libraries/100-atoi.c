#include <stdio.h>

/**
 * main: _atoi - a function that converts a string to an integer
 * Description: a function that convert a string to an integer.
 * Prototype: int _atoi(char *s);
 * The number in the string can be preceded by an
 * infinite number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 * We will use the -fsanitize=signed-integer-overflow gcc
 * flag to compile your code.
 * FYI: The standard library provides a similar function: atoi.
 * FYI cont: Run man atoi to learn more.
 * @s: An input string
 * Return: integer from conversion
 */

int _atoi(char *s)
{
	int sign = 1;

	unsigned int total = 0;

	char null_flag = 0;

	while (*s)
		{
		if (*s == '-')

		sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
		null_flag = 1;

		total = total * 10 + *s - '0';
		}

		else if (null_flag)
			break;
		s++;
		}

		if (sign < 0)
		total = (-total);
			return (total);
}
