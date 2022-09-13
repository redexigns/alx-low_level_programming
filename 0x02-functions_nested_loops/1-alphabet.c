#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * putchar: prints
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

}
