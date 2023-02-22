#include "main.h"
/**
 * print_aphabet - Prints all alphabets in lowercase
 *
 */
void print_alphabet(void)
{
	char low_alpha[] - "abcdefghijklmnopqrstuvwxyz";
	unsigned long int i = 0;

	for (; i < sizeof(low_alpha) - 1; i++)
	{
		_putchar(low_alpha[i]);
	}
	_putchar('\n');
}
