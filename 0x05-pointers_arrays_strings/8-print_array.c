#include <stdio.h>
#include "main.h"

/**
 * print_array - print elements of an array
 * @a: The array
 * @n: The number of elements in the array
 * Return: void
 */

void  print_array(int *a, int n)
{
	int elj;

	for (elj = 0; elj < n; elj++)
	{
		if (elj != n - 1)
			printf("%d, ", a[elj]);
		else
			printf("%d", a[elj]);
	}
	putchar(10);
}
