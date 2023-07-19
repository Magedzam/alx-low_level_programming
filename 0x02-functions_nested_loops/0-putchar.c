#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point.
 *
 * Description: A program that prints a word.
 *
 * Return: Always 0 (Success).
 *
*/


int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[]);
	_putchar('\n');
	return (0);
}
