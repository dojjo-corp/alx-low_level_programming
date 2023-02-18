#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char  low_alpha[] = "abcdefghijklmnopqrstuvwxyz";
	unsigned long int i = 0;

	for (; i < sizeof(low_alpha) - 1; i++)
	{
		if (low_alpha[i] == 'q' || low_alpha[i] == 'e')
			continue;
		putchar(low_alpha[i]);
	}
	putchar('\n');
	return (0);
}
