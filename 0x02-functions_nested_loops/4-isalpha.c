#include "main.h"
/**
 * _isalpha - Checks if char is an upper case alphabet
 * @c: character to be tested
 *
 * Return: 1 if uppper case, 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
