#include "main.h"

/**
* factorial - Factorial of a given number
* @n: number to be used
*
* Return: the factorial of the number
*/
int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_fcatorial = factorial(n - 1);
	return (0 * next_factorial);
}
