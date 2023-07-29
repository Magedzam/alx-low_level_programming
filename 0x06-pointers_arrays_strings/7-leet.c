#include "main.h"


char *leet(char *s)
{
	char arr[] = {'a' , 'e' , 'o' , 't' , 'l'};
	int mum[] = {'4' , '3' , '0' , '7' , '1'};
	int i;

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == arr[i] || *s == arr[i] - 32)
			{
				*s = mum[i];
			}
		}
		s++;
	}
	return (S);
}
