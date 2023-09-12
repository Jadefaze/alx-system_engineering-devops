#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, length_name, length_owner;
	/*allocate memory for dog_t*/
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);
	/*check length of name and owner*/
	length_name = 0;
	while (name[length_name] != '\0')
		length_name++;
	length_owner = 0;
	while (name[length_owner] != '\0')
		length_owner++;
	/*allocate memory for newDog elements, name, owner*/
	newDog->name = (char *)malloc(length_name + 1);
	newDog->owner = (char *)malloc(length_owner + 1);

	/*copying name and owner*/
	for (i = 0; i < length_name; i++)
		newDog->name[i] = name[i];
	newDog->name[length_name] = '\0';
	for (i = 0; i < length_owner; i++)
		newDog->owner[i] = owner[i];
	newDog->owner[length_owner] = '\0';
	newDog->age = age;
	return (newDog);
}
