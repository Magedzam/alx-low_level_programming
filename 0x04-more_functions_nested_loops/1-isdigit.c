#include "main.h"

/**
 * _isdigit - checks if the input is digit between 0-9
 *
 * @c: input
 *
 * Return: 1 if it is digit otherwise (0) (Success)
*/


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
