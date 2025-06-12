#include "main.h"
#include <stdio.h>

/**
 * main - test the rev_string function
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "Holberton";

	printf("Before: %s\n", str);
	rev_string(str);
	printf("After: %s\n", str);
	return (0);
}
