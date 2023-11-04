#include "main.h"
/**
 *create_array - array for prints a string
 *@size: size of the array
 *@c: char
 *Return: pointer or NULL (if fail)
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
