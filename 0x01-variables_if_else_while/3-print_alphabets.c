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
	char alpha_cap[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	unsigned long int i = 0;
	unsigned long int j = 0;

	for (; i < sizeof(alpha_low) - 1; i++)
	{
		putchar(alpha_low[i]);
	}
	for (; j < sizeof(alpha_cap) - 1; j++)
		putchar(alpha_cap[j]);
	putchar('\n');
	return (0);
}
