#include <stdio.h>
#include "lists.h"

/**
 * _strlen - returns the length of string.
 * @s: the string
 *
 * Return: ineger length of the string.
 */

int _strlen(char *s)
{
	int i = 0;
	if (!s)
		return (0);
	while(*s++)
	{
		i++;
	}
	return (i);
	
}
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
