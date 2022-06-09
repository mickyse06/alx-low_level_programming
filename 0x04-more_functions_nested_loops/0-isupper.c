#include "main.h"
/**
 *_isupper - Evalutes if latter is upper
 *@c: letter given
 *Return: is always 0
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
