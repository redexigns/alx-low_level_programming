#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints all argument it receives
* @argc: argument count
* @argv: Argument vector
* Return: Returns Zero
*/
int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
