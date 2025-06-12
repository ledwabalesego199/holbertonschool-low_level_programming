#include "main.h"

/**
 * main - check the puts_half function
 *
 * Return: 0
 */
int main(void)
{
	char *str1 = "0123456789";
	char *str2 = "012345678";

	puts_half(str1); /* should print: 56789 */
	puts_half(str2); /* should print: 45678 */

	return (0);
}
