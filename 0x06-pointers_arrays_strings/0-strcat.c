#include "main.h"



/**
 * _strcat - function that concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: Pointer to resulting string @dest
 *
*/


char *_strcat(char *dest, char *src)
{
	int c = 0;
	int c1;

	while (dest[c] != '\0')
	{
		c++;
	}
	for (c1 = 0; src[c1]; c1++)
	{
		dest[c] = src[c1];
		c++;
	}
	return (dest);
}
