#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program that prints all the numbers of base 16 in
* lowercase, followed by a new line.
*  Return: 0 always
*/

int main(void)
{
	int num;
	char lc;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);
	putchar('\n');

	return (0);
}
