#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: string that is encoded
 *
*/

char *leet(char *s)
{
	char arr[] = {'a' , 'e' , 'o' , 't' , 'l'};
	int mum[] = {'4' , '3' , '0' , '7' , '1'};
	int i;

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if(*s == arr[i] || *s == arr[i] - 32)
			{
				*s = mum[i];
			}
		}
		s++;
	}
	return (s);
}
