#include "main.h"


/**
 * print_rev - prints reversed string followed by a new line
 *
 * @s: pointer to the string to print
 *
 * Return: void
 *
*/



void print_rev(char *s)
{
	int l = 0;
	int i;
	char temp;

	while (s[l])
	{
		l++;
	}
	for (i = 0; i < l / 2; i++)
	{
		temp = s[l];
		s[l] = s[l - 1 - i];
		s[l - 1 - i] = temp;
}
