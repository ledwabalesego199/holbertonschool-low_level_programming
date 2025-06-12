#include <stdio.h>
#include "main.h"

int main(void)
{
	printf("%d\n", _isdigit('5'));  /* Should print 1 */
	printf("%d\n", _isdigit('a'));  /* Should print 0 */
	printf("%d\n", _isdigit('9'));  /* Should print 1 */
	printf("%d\n", _isdigit('/'));  /* Should print 0 */
	return (0);
}
