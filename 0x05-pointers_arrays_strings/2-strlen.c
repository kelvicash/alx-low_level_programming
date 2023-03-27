#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strlen - length of a string
 *
 * @str: input of str
 *
 * Return: the length of str
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}

