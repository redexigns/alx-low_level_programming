#include "main.h"

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{	_putchar(ch);
		_putchar('\n');
	}

}
