#include <stdio.h>
#include "main.h"

/**
 * main - check the _strcpy function
 *
 * Return: 0 on success
 */
int main(void)
{
	char src[] = "Hello, Holberton!";
	char dest[20];

	printf("Before copy: %s\n", dest);
	_strcpy(dest, src);
	printf("After copy: %s\n", dest);

	return (0);
}
