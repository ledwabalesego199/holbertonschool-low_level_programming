#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Description: If the length is odd,
 * prints (length + 1) / 2 characters from the second half
 */
void puts_half(char *str)
{
	int len = 0, i, start;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
