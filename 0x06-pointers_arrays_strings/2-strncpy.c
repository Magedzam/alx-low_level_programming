#include "main.h"


char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] && src[c] != '\0'; c++)
	{
		dest[c] = src[c];i
	}
	return (dest);
}
