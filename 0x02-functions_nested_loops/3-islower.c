#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks for lowercase letters
 * @c: character to be checked
 *
 * Return: 1 if char is lowercase, 0 if not
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
