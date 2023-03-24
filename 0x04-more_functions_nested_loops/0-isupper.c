#include "main.h"
/**
 * _isupper - check upercase character.
 *
 * @c: integer input
 *
 * Return: return 1 if c is upper 0 else.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
