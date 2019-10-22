#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - Function string.
 * @s: Value string check.
 * Return: String.
 */
int _strlen(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

		return (i);

}
/**
 * _strcpy - Function that copies the string pointed to by src.
 * @dest: Destination string.
 * @src: Source string.
 * Return: void
 */
void _strcpy(char *dest, char *src)
{

	int i, len = _strlen(src);

		for (i = 0; i <= len; i++)

			dest[i] = src[i];

}
/**
 * new_dog - Create new dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 * Return: *p.
*/
dog_t *new_dog(char *name, float age, char *owner)
{

	int name_len = _strlen(name),
		owner_len = _strlen(owner);
		dog_t *space;
/*Create space in memory*/
	space = malloc(sizeof(dog_t));

	if (space)
	{
/*New string in memory*/
		space->name = malloc(sizeof(char) * (name_len + 1));
		if (space->name)
		{
			space->owner = malloc(sizeof(char) * (owner_len + 1));
			if (space->owner)
			{
/*Assigned copy to spaces*/
			_strcpy(space->name, name);
			space->age = age;

			_strcpy(space->owner, owner);
			return (space);
			}
			else
			{
/*Clear memory*/
				free(space->name);
					free(space);
			}
		}
		else
		free(space);
	}

	return (NULL);

}
