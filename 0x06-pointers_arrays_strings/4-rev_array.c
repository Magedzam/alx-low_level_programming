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
	int j;
	int t;

	for (i = 0; j = (n - 1); i <= j; i++; j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
