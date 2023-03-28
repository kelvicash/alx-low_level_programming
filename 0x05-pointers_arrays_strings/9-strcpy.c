#include "main.h"
/**
 * *_strcpy - copy pointer to dest
 *
 * @dest: the destination
 * @src: the source input
 *
 * Return: characters in the string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
