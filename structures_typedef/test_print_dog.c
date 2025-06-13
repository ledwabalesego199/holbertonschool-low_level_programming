#include "dog.h"
#include <stdio.h>

int main(void)
{
    struct dog my_dog = {"Buddy", 3.5, "Alice"};
    struct dog null_name = {NULL, 2.0, "Bob"};
    struct dog null_owner = {"Max", 5.2, NULL};
    struct dog null_all = {NULL, 0.0, NULL};

    printf("Test 1:\n");
    print_dog(&my_dog);

    printf("\nTest 2:\n");
    print_dog(&null_name);

    printf("\nTest 3:\n");
    print_dog(&null_owner);

    printf("\nTest 4:\n");
    print_dog(&null_all);

    printf("\nTest 5 (NULL pointer):\n");
    print_dog(NULL);

    return 0;
}
