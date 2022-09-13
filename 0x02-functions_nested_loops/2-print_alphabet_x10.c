#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int ch;
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
