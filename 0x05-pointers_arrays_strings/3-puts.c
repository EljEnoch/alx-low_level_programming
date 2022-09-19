#include <stdio.h>
#include "main.h"

/**
 * _puts - Print a string folllowed by a new line.
 * @str: String to be printed
 *
 * Description: Prints a string
 * On success: Returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
