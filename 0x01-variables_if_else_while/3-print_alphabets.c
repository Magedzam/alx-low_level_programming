#include <stdio.h>

/**
 * main - Entry Point.
 *
 * Description: print the alphabet in losercase and uppercase
 *
 * Return: Always 0 (Success).
 *
*/

int main(void)
{
	char ch1= 'a';
	char ch2= 'A';

	while (ch1 <= 'a')
	{
		putchar(ch1);
		ch1++;
	}

	while (ch2 <= 'A')
	{
		putchar(ch2);
		ch2++;
	}	
	putchar('\n');
	return (0);
}
