#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters
 * @size: size of the triangle
 *
 * Description: prints a triangle followed by a new line.
 * If size is 0 or less, only prints a new line.
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
			_putchar(' ');

		for (hash = 1; hash <= row; hash++)
			_putchar('#');

		_putchar('\n');
	}
}
