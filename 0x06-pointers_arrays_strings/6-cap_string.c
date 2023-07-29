#include "main.h"


char *cap_string(char *s)
{
	char no[] = {'\n', '\t', ',', ' ', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i1;
	char *ss = s;

	while (*s != '\0')
	{
		for (i1 = 0; i1 < 13; i1++)
		{
			if (*s == no[i1])
			{
				s++;
				*s = *s - 32;
				break;
			}
		}
		s++;
	}
	return (ss);
}
