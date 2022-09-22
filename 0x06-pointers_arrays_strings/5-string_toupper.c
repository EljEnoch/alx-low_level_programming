#include "main.h"

/**
 * string_toupper - Changes lowercaee letters to uppercase.
 * @str: String to change
 *
 * Return: Address to the string
 */

char *string_toupper(char *)
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
