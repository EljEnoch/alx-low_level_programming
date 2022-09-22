#include "main.h"

/**
 * string_toupper - Changes lowercaee letters to uppercas
 * @str : No parameter
 * Return: Address to the string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
