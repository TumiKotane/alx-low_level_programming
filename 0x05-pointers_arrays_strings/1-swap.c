#include <stdio.h>
/**
 * swap_int - Swaps the value of two integer
 * @a: the first integer to be swapped
 * @b: the second integer to be swappe
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
