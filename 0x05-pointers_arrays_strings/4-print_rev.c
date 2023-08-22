#include <stdio.h>
#include "main.h"

/*Write a function
 *  that prints a string,
 *   in reverse,
 *   followed by a new line.

    Prototype: void print_rev(char *s);
*/

void print_rev(char *s)
{
	int i, n;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--){
		_putchar(s[i])
	}

	_Putchar('\n');

}
