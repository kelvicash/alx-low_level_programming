#include "main.h"
#include "stdio.h"
/**
 * print_array - prints n elements
 *
 * @a: first int
 * @n: second int
 *
 * Return: always 0
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
