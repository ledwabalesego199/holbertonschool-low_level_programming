#include <stdio.h>
#include "main.h"

/**
 * main - check the code for _strcpy
 *
 * Return: 0
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
