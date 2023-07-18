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

	while (ch1 <= 'a', ch2 <= 'A')
	{
		putchar(ch1, ch2);
		ch1++;
		ch2++;
	}
	putchar('\n');
	return (0);
}
