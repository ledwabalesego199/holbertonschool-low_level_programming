#include "main.h"

/**
 * main - check the print_array function
 *
 * Return: 0
 */
int main(void)
{
	int arr[] = {0, 1, 2, 3, 4, 98, 1024, 402, 4096};
	print_array(arr, 9);
	print_array(arr, 5);
	return (0);
}
