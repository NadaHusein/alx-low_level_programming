#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main()
{
	int x;
	for (x = 48; x <58 ; x++){
		putchar(x);
	}
	putchar('\n');
	return (0);
}

