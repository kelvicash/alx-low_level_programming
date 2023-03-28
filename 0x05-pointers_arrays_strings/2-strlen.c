#include "main.h"
#include <stdio.h>
/**
 * _strlen - length of a string
 *
 * @str: input of str
 *
 * Return: the length of str
 */
size_t _strlen(const char *str)

{
	size_t len = 0;

	while (str++)
	len++;
	return (len);
}

