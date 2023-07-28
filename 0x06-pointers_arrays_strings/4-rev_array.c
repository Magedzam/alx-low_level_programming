#include "main.h"

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		i++;
	}
	while (i >= 0)
	{
		if (i != (n-1))
		{
			printf(", ");
		}
		printf("%i", a[i]);
		i--;
	}
}
