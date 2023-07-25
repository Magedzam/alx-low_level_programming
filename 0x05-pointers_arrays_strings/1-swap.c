#include "main.h"

/**
 * swap_int - swaps the values of two integrs
 *                   using two input parameters
 *
 * @a: int parameter 1
 * @b: int parameter 2
 *
 * Return: Nothing
 *
*/



void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
