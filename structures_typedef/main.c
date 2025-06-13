#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog my_dog;
    init_dog(&my_dog, "Buddy", 3.5, "Alice");

    printf("Name: %s\n", my_dog.name);
    printf("Age: %.1f\n", my_dog.age);
    printf("Owner: %s\n", my_dog.owner);

    return 0;
}
