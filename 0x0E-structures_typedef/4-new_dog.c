#include "dog.h"
/**
* _strlen - lengt of a string
* @str: target string
* Return: strlen
*/
int _strlen(char *str)
{
int length = 0;
while (str)
length++;
return (length);
}
/**
* _strcopy - copies target string to another destination
* @dest: stores a copy of _strcopy
* @src: buffer storing string to copy
* Return: returns copied string
*/
char *_strcopy(char *dest, char *src)
{
int counter = 0;

for (; src[counter] ; counter++)
dest[counter] = src[counter];
dest[counter] = '\0';
return (dest);
}
/**
* new_dog - a function that creates a new dog
* @name: name of the new dog
* @age: age of the new dog
* @owner: owner of the new dog
* Return: NULL ==> fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_doggy;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

new_doggy = malloc(sizeof(dog_t));
if (new_doggy == NULL)
return (NULL);

new_doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (new_doggy->name == NULL)
{
free(new_doggy);
return (NULL);
}

new_doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (new_doggy->owner == NULL)
{
free(new_doggy->name);
free(new_doggy);
return (NULL);
}

new_doggy->name = _strcopy(new_doggy->name, name);
new_doggy->age = age;
new_doggy->owner = _strcopy(new_doggy->owner, owner);

return (new_doggy);
}
