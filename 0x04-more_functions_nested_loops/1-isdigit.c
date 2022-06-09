#include "main.h"
/**
 *_isdigit - checks if digit or not
 *@c: charter given
 *Return: if digit 1 else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
