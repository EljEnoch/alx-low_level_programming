#include "main.h"

/**
 * _strncpy - For the fuction
 * @dest: Buffer storing the string copy
 * @src: The source string
 * @n: Maximum number of bytes copied
 * Return: Returns the copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
