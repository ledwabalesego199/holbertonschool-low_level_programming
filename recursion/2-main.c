#include "main.h"
#include <stdio.h>

/**
 * main - test _strlen_recursion
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _strlen_recursion("Recursion length");
	printf("%d\n", len);
	return (0);
}
