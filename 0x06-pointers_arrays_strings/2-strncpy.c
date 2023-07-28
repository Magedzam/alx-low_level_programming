#include "main.h"


/**
 * _strncpy - a function that copies a string
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/



char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
	
}
