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
	for (i = 0; str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}


