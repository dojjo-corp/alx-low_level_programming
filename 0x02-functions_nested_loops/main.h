#include <stdio.h>
 /**
  * print_char -Print given characters
  *
  */

void print_char(void)
{
	char low_alpha[] = "_putchar";
	unsigned long int i = 0;

	for (; i < sizeof(low_alpha) - 1; i++)
	{
		putchar(low_alpha[i]);
	}
	putchar('\n');
}
