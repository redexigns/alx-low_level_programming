#include "main.h"

/**
* _print_rev_recursion - to prints a string in reverse
* @s: to be printed
*
* Return: Void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
