#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase aphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	char low_alpha[] = "abcdefghijklmnopqrstuvwxyz";
	unsigned long int i = 0;
	int j = 0;

	for (; j < 10; j++)
	{
		for (; i < sizeof(low_alpha) - 1; i++)
		{
			_putchar(low_alpha[i]);
		}
		_putchar('\n');
	}
}
