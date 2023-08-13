#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main()
{
char chLow;
char chHigh;
	for (chLow = 'a'; chLow <= 'z'; chLow++){
		putchar(chLow);
}
for (chHigh = 'A'; chHigh <+ 'Z';chHigh++){
	putchar(chHigh);
}
putchar('\n');
	return (0);
	}

