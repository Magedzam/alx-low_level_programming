#include "main.h"


/**
 * reverse_array - reverses the content of an array of intgers
 *
 * @a: an array of integrs
 * @n: the number of element to swap
 *
 * Return: nothing
*/


void reverse_array(int *a, int n)
{
	int i;

	for (i = (n - 1); a[i] && i >= 0; i--)
	{
		printf("%i", a[i]);
	}
}
