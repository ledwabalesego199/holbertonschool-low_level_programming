#include <stdio.h>
#include "main.h"

int main(void)
{
	char *str = "Hello, Holberton!";
	int length;

	length = _strlen(str);
	printf("Length of '%s' is %d\n", str, length);

	return (0);
}
