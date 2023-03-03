#include <stdio.h>
/**
 * print_most_numbers - Prints single integers except 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		putchar(i);
	}
	putchar('\n');
}
