#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char low_alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = sizeof(low_alpha) - 2;

	for (; i >= 0; i--)
		putchar(low_alpha[i]);
	putchar('\n');
	return (0);
}
