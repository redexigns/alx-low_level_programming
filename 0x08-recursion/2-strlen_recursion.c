#include "main.h"

/**
* _ strlen_recursion - Return the legnth of the string
* @s: string to be printed
*
* Return: void
*/
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
