#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int n;
	int ch;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
