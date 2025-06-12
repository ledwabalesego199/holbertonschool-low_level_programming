#include <stdio.h>
#include "main.h"

int main(void)
{
    char *str1 = "98";
    char *str2 = "   ---+--+1234ab567";
    char *str3 = "words and 987";
    char *str4 = "-+---+456";
    char *str5 = "no digits here";

    printf("%d\n", _atoi(str1));  // 98
    printf("%d\n", _atoi(str2));  // -1234
    printf("%d\n", _atoi(str3));  // 0
    printf("%d\n", _atoi(str4));  // -456
    printf("%d\n", _atoi(str5));  // 0

    return (0);
}
