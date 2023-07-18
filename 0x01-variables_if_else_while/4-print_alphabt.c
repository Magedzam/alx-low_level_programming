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

	while(ch <= 'z' && ch != 'q' && ch != 'e')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
