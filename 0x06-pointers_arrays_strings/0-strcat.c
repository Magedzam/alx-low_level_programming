#include "main.h"




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
