#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees memory allocation
* @d: pointer to struct dog
*
* Return: no return
*/
void free_dog(dog_t *d)
{
	free(d);
	free((*d).name);
	free((*d).owner);
}
