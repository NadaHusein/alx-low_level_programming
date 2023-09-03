#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int n1, n2, res;
	if (argc < 3)
	{
		printf("Error\n")
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;
	printf("%d\n", res);
	return(0);
}
