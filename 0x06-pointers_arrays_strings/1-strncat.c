#include "main.h"



/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/


char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int c1;

	while (dest[c] != '\0')
	{
		c++;
	}
	for (c1 = 0; c1 < n && src[c1]; c1++)
	{
		dest[c] = src[c1];
		c++;
	}
	return (dest);
}
