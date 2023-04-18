#ifndef _DOG_H
#define _DOG_H

/**
* struct dog - structure that store info of dog
* @name: name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
*dog_t - synonem of struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
