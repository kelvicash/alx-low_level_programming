#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) success
 */
int main(void)
{
	int i = 0;

	do {
		printf("%d", i);
		i++;
	} while (i < 9);
	{
		printf("%d \n", i);
	}
	return (0);
}
