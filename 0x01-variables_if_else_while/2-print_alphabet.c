#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program that prints the alphabet in lowercase, followed by a new line
* return: zero
*/

int main(void)
{
	char lc;

	for (lc = 'a'; lc < 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
