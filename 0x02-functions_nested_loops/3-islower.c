#include "main.h"
/**
 * _islower - prints alphabet in lowercase
 *@i: input int
 * Return: 1 for lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}


