#include <stdio.h>
#include "dog.h"
/**
*new_dog - creat a new dog allocate memory
*@name: the dog name
*@age: the dog age
*@owner:the dog owner
*
*Return: ndog or null if it fail to
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int i, namelen, ownerlen;

	ndog = malloc(sizeof(*ndog));
	if (ndog == NULL || !(name) || !(owner))
	{
		free(ndog);
		return (NULL);
	}

	for (namelen = 0; name[namelen]; namelen++)
		;
	for (ownerlen = 0; owner[ownerlen]; ownerlen++)
		;
	ndog->name = malloc(namelen + 1);
	ndog->owner = malloc(ownerlen + 1);

	if (((*ndog).name == NULL) || ((*ndog).owner == NULL))
	{
		free((*ndog).owner);
		free((*ndog).name);
		free(ndog);
		return (NULL);
	}

	for (i = 0; i < namelen; i++)
		(*ndog).name[i] = name[i];
	(*ndog).name[i] = '\0';

	(*ndog).age = age;

	for (i = 0; i < ownerlen; i++)
		ndog->owner[i] = owner[i];
	ndog->owner[i] = '\0';

	return (ndog);
}
