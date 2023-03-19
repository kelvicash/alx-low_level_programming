#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) success
 */
int main(void)
{
	int n;
	int ch;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		putchar(n);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
