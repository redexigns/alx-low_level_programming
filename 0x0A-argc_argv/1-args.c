#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints the number of arguements passed into it
*@argc: argument count
*@argv: argument vector
*Return: Always Zero
*/

int main(int argc, char **argv)
{
	int num;
	for (num = 0; num < argc;)
	{
		num++;
		(*argv)++;
	}
	printf("%i\n", num - 1);
	return (0);
}
