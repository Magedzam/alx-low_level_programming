#include "main.h"

/***/


int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else (n < 0)
	{
		putchar(45);
		return (-1);
	}
}
