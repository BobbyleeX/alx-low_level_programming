#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program that prints all possible combinations of single-digit numbers.
* Return: 0 always
*/

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
