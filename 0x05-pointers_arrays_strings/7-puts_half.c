#include "main.h"


void puts_half(char *str)
{
	int i = 0;
	int l;

	while (str[i] != '\0')
	{
		i++;
	}
	if(i % 2 == 0)
	{
		l = i / 2;
	}
	else
	{
		l = (i - 1) / 2;
	}
	while (l <= i)
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}			
