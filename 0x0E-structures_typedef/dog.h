#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct that takes name, owner and age of a dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3d member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
