#include "mian.h"
/**
 * print_sign - Prints sign of a number
 * @n: Number to work with
 *
 * Return: Sign of number with either of 1 (n>0), 0 (n==0), or -1 (n<0)
 */
int print_sign(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (1);
}
