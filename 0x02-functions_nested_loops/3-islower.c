#include "main.h"

/**
 * _islower -  checks for lowercase character
 * @c: checks input of function
 * Return: 1 if 'c' is lowercase otherwise always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
