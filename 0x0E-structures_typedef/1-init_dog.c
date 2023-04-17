#include "dog.h"
/**
*int_dog - initialze the struct dog
*@owner: owner of the dog
*@age:age of the dog
*@name:name of the dog
*@d:structur of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	/*(*d).name = name;*/
	d->age = age;
	/*(*d).age = age; */
	d->owner = owner;
	/*(*d).owner = owner;*/

}
