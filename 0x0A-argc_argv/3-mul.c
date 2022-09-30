#include <stdio.h>
#include <stdlib.h>

/**
*main - program that multiplies two numbers.
*@argc: argument count
*@argv: argument vector
*Return: Return Zero
*/
int main(int argc, char **argv)
{
	int nul;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	else
	{
		nul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", nul);
	}
	return (0);
}
