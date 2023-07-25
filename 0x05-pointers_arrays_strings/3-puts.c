#include "main.h"



void _puts(char *str)
{
	for (*str = 0; *str != '\0'; str++)
	{
		_putchar(*str + 48);
	}
	_putchar('\n');
}
