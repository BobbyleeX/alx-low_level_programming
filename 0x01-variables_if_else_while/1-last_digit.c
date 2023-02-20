#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -program will assign a random number to the variable 
* n each time it is executed
* return: zero
*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (n > 5)
	{
		printf("last digit of %d is greater than 5: the string and is
greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("the last digit of %d is 0\n ", n, a);
	}
	else
	{
		printf("the last digit of %d is less than 6 and not 0: the string
and is less than 6 and not 0\n", n, a);
	}

	return (0);
}
