#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 * Description: Prints thye numbers excluding 2and 4
 * Return: The numbers since 0 u to 9
 */

void print_most_numbers(void)

{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}
