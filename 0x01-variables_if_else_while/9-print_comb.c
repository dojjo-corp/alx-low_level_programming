#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Alwys 0 (Success)
 *
 */
int main(void)
{
	int i = 48;

	for (; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
