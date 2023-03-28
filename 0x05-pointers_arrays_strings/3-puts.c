#include "main.h"
/**
 * _puts - asring to the stdoutpt
 *
 * @str: input string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
