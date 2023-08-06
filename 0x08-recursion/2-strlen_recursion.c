#include "main.h"


/**
 * _strlen_recursion - function compute the length of a string
 * @s: pointer to a string
 * Return: the length of the string
*/


int _strlen_recursion(char *s)
{
	int n;
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
