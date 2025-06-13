#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure that defines a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog (float)
 * @owner: Pointer to the owner's name
 *
 * Description: A structure that holds basic information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: Prints the fields of a dog structure. If any element
 * is NULL, it prints (nil) instead. If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d);

#endif /* DOG_H */
