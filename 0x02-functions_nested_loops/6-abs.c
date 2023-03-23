#include "main.h"
/**
 * _abs - computes absolute int value
 * means output is positive always.
 *
 * @i: input number as int 
 * Return: absolute int value
 */
int _abs(int i);
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
