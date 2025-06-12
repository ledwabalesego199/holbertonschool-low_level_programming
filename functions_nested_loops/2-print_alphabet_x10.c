#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int count = 0;

	while (count < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
