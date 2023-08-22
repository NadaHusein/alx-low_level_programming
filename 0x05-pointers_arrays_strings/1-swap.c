/**
 * Write a functio
 * n that swaps 
 * the values of
 * two integers.
 *   Prototype: void swap_int(int *a, int *b);
 */

void swap_int(int *a, int *b)
{
	int v;
	v = *a;
	*a = *b;
	*b = v;
}
