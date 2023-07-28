#include "main.h"


char *_strncpy(char *dest, char *src, int n)
{
	int c;
	int c1 = 0;

	for (c = 0; c < n && src[c] && src[c] != '\0'; c++)
	{
		dest[c1] = src[c];
		c1++;
	}
	return (dest);
}
