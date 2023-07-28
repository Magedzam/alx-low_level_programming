#include "main.h"



int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	equal = ((int)*s1 - (int)*s2);
	return (equal);
}
