#include "main.h"

/**
 * _abs - Computes the absolute number of an integer.
 * @c: The number to bet computed
 * Return: Absolute value of number or zero
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
