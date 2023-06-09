#include "main.h"
/**
 * _strncat-concantenates two strings
 * @dest:pointer to string
 * @src:pointer to string
 * @n: number of bytes
 * Return:concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c;

	while (dest[i] != '\0')
		i++;
	for (c = 0; c < n && src[c] != '\0'; c++, i++)
	{
		dest[i] = src[c];
	}
	dest[i] = '\0';
	return (dest);
}
