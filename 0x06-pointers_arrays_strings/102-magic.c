#include <stdio.h>

/**
 * main - main methid
 * Descriotion: Adding a line of code
 * Return: 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;

	p = &n;

	/*your line of code here*/
	*(p + 5) = 98;

	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);

	return (0);
}
