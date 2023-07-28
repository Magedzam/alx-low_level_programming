#include "main.h"



int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	if (*s1 != *s2)
	{
		equal = ((int)*s1 - (int)*s2);
	}
	else equal = 0;
	return (equal);
}
