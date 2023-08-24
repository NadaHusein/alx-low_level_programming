#include <stdio.h>
/* Write a function
 *  that prints a string,
 *   followed by a new line, 
 *   to stdout.

    Prototype: void _puts(char *str);
*/

void _puts(char *str)
{
	int i;
	for (i = 0; str[i] != '\0';)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');

}


