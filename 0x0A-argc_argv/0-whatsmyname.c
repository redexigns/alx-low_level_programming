#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints its name.
*@argc: arguement count
*@argv: arguement vector
*Return: Always Zero
*/

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
