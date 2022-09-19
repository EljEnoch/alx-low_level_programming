#include <stdio.h>
#include "main.h"

/**
 * _puts - Print a string folllowed by a new line.
 * @str: String to be printed
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
