#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen_recursion - return the length of a string
 *
 * @s: char pointer
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * _strcpy - copies the string pointed to by src,
 *               including the terminating null byte (\0),
 *               to the buffer pointed to by dest
 *
 * @dest: char pointer
 * @src: char pointer
 *
 * Return: char*
 */
char *_strcpy(char *dest, char *src)
{
	int cLoop, size = _strlen_recursion(src);

	for (cLoop = 0; cLoop < size; cLoop++)
	{
		dest[cLoop] = src[cLoop];
	}

	dest[size] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 *
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int sizeName = _strlen_recursion(name), sizeOwner = _strlen_recursion(owner);

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * sizeName + 1);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * sizeOwner + 1);

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
