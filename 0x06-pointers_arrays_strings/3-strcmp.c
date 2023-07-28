#include "main.h"



int _strcmp(char *s1, char *s2)
{
	int c1;
	int c2;

	for (c1 = 0; s1[c1] != '\0'; c1++)
		;
	for (c2 = 0; s2[c2] != '\0'; c2++)
		;
	if (c1 > c2)
	{
		printf("15");
	}
	else if (c1 < c2)
	{
		printf("-15");
	}
	else printf("0");

	return (0);
}
