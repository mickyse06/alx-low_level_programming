#include "main.h"
/**
 *clear_bit - sets the value of a bit to 0
 *@n: pointer to bit
 *@index: the index given
 *Return: 1 if value, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);

}
