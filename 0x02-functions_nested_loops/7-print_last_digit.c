#include "main.h"


/**
 * print_last_digit - print last digit of a number
 *
 * @a: take integer numper input
 *
 * Return: Lastdigit
 */



int print_last_digit(int a)
{
	if ( a < 0)
		lastdigit = -1 * ( a % 10);
	lastdigit = a % 10;
	_putchar(lastdigit);
	return (lastdigit);
return (0);
}
