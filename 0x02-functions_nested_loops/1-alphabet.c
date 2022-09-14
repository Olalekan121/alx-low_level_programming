#include "main.h"

/**
 * print_alphabet - Prints alphabets in lower case
 *
 * Description: Prints all the letters of the alphabets in lower case followed by a new line
 *
 * Return: Alphabets in lowercase
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
