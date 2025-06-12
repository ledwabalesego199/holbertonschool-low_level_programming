#include <stdio.h>
#include "main.h"

int main(void)
{
	printf("%d\n", _isupper('H')); /* Should print 1 */
	printf("%d\n", _isupper('h')); /* Should print 0 */
	printf("%d\n", _isupper('0')); /* Should print 0 */
	return (0);
}
