#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to convert
 *
 * Return: the converted integer, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0, found_digit = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			num = num * 10 + (s[i] - '0');
		}
		else if (found_digit)
			break;
		i++;
	}

	if (!found_digit)
		return (0);

	return (sign * num);
}
