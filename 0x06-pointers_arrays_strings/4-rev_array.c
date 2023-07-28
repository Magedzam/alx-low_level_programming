#include "main.h"

void reverse_array(int *a, int n)
{
	int i = n-1;

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
