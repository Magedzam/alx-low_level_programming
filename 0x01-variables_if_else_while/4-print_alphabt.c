#include <stdio.h>

/**
 * main - Entry Point.
 *
 * Description: prints all the alphabet in lowercase except q and e.
 *
 * Return: Always 0 (Success).
 *
*/


int main(void)
{
	char ch = 'a';

	while (ch <= 'z') 
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
