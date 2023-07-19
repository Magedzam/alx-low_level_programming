#include "main.h"

/**
 * _isalpha: function to check if the input is character
 *                      in lowercaser or uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: 1 is c if true otherwise 0.
*/



int _isalpha(int c)
{
	if ( (c >= 65 && c <= 90) || (c >= 97 && c <= 122) )
		return (1);
	return (0);
}
