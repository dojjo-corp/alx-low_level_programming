#include <stdio.h>
/**
 * print_numbers - Print all single digit integers
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
}
