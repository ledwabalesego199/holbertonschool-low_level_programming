#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This struct stores basic information about a dog.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * dog_t - new name for the type struct dog
 */
typedef struct dog dog_t;

/* Function prototype */
void init_dog(dog_t *d, char *name, float age, char *owner);

#endif /* DOG_H */
