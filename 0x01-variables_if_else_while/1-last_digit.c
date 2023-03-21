#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - entry point
 *
 * Description: print last digit of number n
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;

	if (m == 0)
		printf("Last digit of %d is %d and is %d\n", n, m, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is %s\n", n, m, "less than 6 and not 0");
	else if (m > 5 && m > 6)
		printf("Last digit of %d is %d and is %s\n", n, m, "greater than 5");
	return (0);
}
