#include "main.h"
/**
 * print_numbers - print nos 0 to 9.
 *
 * Return: always 0
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
