#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog from a copy
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *cpyname, *cpyowner;
	unsigned int i, namelen = 0, ownlen = 0;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		namelen++;
	for (i = 0; owner[i] != '\0'; i++)
		ownlen++;
	cpyname = malloc(sizeof(char) * (namelen + 1));
	if (cpyname == NULL)
		return (NULL);
	cpyowner = malloc(sizeof(char) * (ownlen + 1));
	if (cpyowner == NULL)
		return (NULL);
	for (i = 0; i <= namelen; i++)
		cpyname[i] = name[i];
	for (i = 0; i <= ownlen; i++)
		cpyowner[i] = owner[i];
	p->name = cpyname;
	p->owner = cpyowner;
	p->age = age;
	return (p);
}

