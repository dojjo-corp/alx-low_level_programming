#include <stdio.h>
 /**
  * main - Entry point of program
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char low_alpha[] = "_putchar";
	unsigned long int i = 0;

	for (; i < sizeof(low_alpha) - 1; i++)
	{
		putchar(low_alpha[i]);
	}
	putchar('\n');
	return (0);
}
