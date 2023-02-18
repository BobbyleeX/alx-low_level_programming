#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -prints if the number is positve, negative or 0
* return: zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is a positve number\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is a negative number\n", n);
	}

	return (0);
}
