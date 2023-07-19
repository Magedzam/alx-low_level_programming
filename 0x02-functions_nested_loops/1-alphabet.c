#include "main.h"

/**
 * Description: A Function print_alphabet utilizes on the _putchar function
 * to print the alphabet form a-z
 *
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
