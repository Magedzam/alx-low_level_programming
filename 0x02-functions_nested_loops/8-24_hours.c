#include "main.h"

/**
 * jack_bauer - prints every minute of the day.
*/

void jack_bauer(void)
{
	int min;
	int hr;

	for(hr = 0; hr <= 24; hr++)
	{
		for(min = 0; min <= 59; min++)
		{
			_putchar((hr / 10)+ '0');
			_putchar((hr % 10)+ '0');
			_putchar(':');
			_puthcar((min / 10)+ '0');
			_putchar((min % 10)+ '0');
			_putchar('\n');
		}
	}
}	
