#include <stdio.h>
#include "main.h"

/**
 * puts_half - print half a strong
 * @str: input string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		n = (i + 1) / 2;

		while (str[n] != '\0')
		{
			_putchar(str[n]);

			n++;
		}
	}
	else
	{
		n = (i / 2);

		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
