#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main -program that prints all single digit numbers of base 10 starting from 0
* Return: 0 always
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
