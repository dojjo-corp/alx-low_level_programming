#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase aphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	char low_alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(low_alpha[i]);
		}
		_putchar('\n');
	}
}
