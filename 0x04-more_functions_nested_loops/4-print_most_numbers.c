#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */

void print_most_numbers(void)
{
	int mn;

	for (mn = 48; mn < 58; mn++)
	{
		if (mn != 50 && mn != 52)
		{
			_putchar(mn);
		}
		_putchar('\n');
	}
}
