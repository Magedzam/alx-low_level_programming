#include "main.h"



void _puts(char *str)
{
	for (*str = 0; *str != '\0'; str++)
	{
		putchar(*str + 48);
	}
	putchar('\n');
}
