#include "main.h"
#include <stdio.h>

/**
 * main - test swap_int
 *
 * Return: Always 0.
 */
int main(void)
{
	int x = 98;
	int y = 42;

	printf("Before swap: x = %d, y = %d\n", x, y);
	swap_int(&x, &y);
	printf("After swap: x = %d, y = %d\n", x, y);
	return (0);
}
