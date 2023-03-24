#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks if input is a digit
 *
 * @c: char input
 *
 * Return: 1 if digit 0 else
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
