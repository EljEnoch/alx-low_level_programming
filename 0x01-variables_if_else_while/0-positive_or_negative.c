#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -prints if the number is positive, zero or negative
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() -RAND_MAX / 2;
	/******/
	if (n > 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n==0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		prinft("%i is negative\n", n);
	}
	return (0);
}
