#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
    int len = 0, i, start;

    while (str[len] != '\0')
        len++;

    start = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

    for (i = start; i < len; i++)
        _putchar(str[i]);

    _putchar('\n');
}
