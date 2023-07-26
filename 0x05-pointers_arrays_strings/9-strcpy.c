#include "main.h"



/**
 * *_strcpy - copies the string pointed to be src
 * @dest: char type string
 * @src: char type string
 * the buffer pointed to be dest
 * Return: Nothing
*/


char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
