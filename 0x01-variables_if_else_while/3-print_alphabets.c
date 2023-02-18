#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program will assign a random number to the variable n
* return: zero
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch < 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
