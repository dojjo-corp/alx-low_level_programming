#include <stdio.h>
/**
 * main - Entry Point of program
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alpha_low[] = "abcdefghijklmnopqrstuvwxyz";
	unsigned long int i = 0;

	for (; i < sizeof(alpha_low) - 1; i++)
	{
		putchar(alpha_low[i]);
	}
	putchar('\n');
	return (0);
}
