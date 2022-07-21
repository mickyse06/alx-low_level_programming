#include "main.h"
/**
 *set_bit - set the value of bit to given index
 *@n:a pointer to bit
 *@index:the index value
 *Return: 1 if value , -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);

}
