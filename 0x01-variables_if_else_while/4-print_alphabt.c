#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program will assign a random number to the variable n
* Return 0 always
*/

int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');

	return (0);
}
