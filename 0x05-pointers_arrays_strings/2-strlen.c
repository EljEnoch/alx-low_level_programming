#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The character containing the string
 * Return: character's length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
