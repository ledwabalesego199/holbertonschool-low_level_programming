#include "main.h"

/**
 * print_square - prints a square of '#' characters
 * @size: the size of the square
 *
 * Description: prints a square followed by a new line.
 * If size is 0 or less, only prints a new line.
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
