#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@c: is char type
 * Return: 1 (if letter)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
