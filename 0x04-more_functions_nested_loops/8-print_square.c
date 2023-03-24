#include "main.h"
/**
 * print_square - print a square
 * @size: input size
 * Return: always 0
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int n, m;

		for (n = 0; n < size; n++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
