#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i = 48;
	unsigned long int j = 0;
	char alpha[] = "abcdef";

	for (; i < 58; i++)
		putchar(i);
	for (; j < sizeof(alpha) - 1; j++)
		putchar(alpha[j]);
	putchar('\n');
	return (0);
}
