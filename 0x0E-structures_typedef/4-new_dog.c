#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string
 * @str: The string to be measured.
 * Return: The length of the string
 */
int _strlen(char *str)
{
int len = 0;
while (*str++)
{
len++;
}
return (len);
}

/**
 * _strcopy - Copies the string pointed by src, including null bytes to dest
 * @dest: The buffer storing the string copy
 * @src: The source string
 * Return: The pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
int index = 0;
for (index = 0; src[index]; index++)
{
dest[index] = src[index];
}
dest[index] = '\0';
return (dest);
}

/**
 * new_dog - Create a new dog
 * @name: Name of the dog
 * @age: Age off the dog
 * @owner: Owner of the dog
 * Return: The new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t doggo;
if (name == NULL || age < 0 || owner == NULL)
{
return (NULL);
}
doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
{
return (NULL);
}
doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (doggo->name == NULL)
{
free(doggo);
return (NULL);
}
doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (doggo->owner == NULL)
{
free(doggo->owner);
free(doggo);
return (NULL);
}
doggo->name = _strcopy(doggo->name, name);
doggo->age = age;
doggo->owner = _stropy(doggo->owner, owner);
return (doggo);
}
