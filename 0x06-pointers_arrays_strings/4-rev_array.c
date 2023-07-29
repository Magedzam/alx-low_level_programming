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
	int c;
	int t;

	for (i = 0; c = (n - 1); i <= c; i++; c--)
	{
		t = a[i];
		a[i] = a[c];
		a[c] = t;
	}
}
