#include <stdio.h>
#include "main.h"

int main(void)
{
    char dest[100] = "Hello, ";
    char src[] = "World!";

    _strcat(dest, src);
    printf("%s\n", dest);

    return 0;
}
