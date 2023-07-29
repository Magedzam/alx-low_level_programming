#include "main.h"


/**
 * islower - determines whether ascii is lowercase
 * @c: character
 * Return: 1 if true, 0 if false
 *
*/

int islower(char c)
{
	return (c >= 97 && c <= 122);
}




/**
 * isdelimiter - determines whether ascii is a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
 *
*/

int isdelimiter(char c)
{
	int i;
	char no[] = " \t\n,.?;"{}()!";

	for (i = 0; i < 13; i++)
	{
		if (c == no[i])
		{
			return (1);
		}
	return (0);
	}
}


/**
 * *cap_string - capitalizes all words of a string
 * @s: input string
 * Return: strings with capatlized words
 *
*/

char *cap_string(char *s)
{
	char *ss = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isdelimiter(*s))
			foundDelimit = 1;
		else if
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ss);
}
