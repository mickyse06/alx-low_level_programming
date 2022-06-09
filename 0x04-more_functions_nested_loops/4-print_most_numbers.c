#include "main.h"
/**
 *print_most_numbers - abvoid 2 and 4
 *Return: prints 1-9 other that 2and r
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
