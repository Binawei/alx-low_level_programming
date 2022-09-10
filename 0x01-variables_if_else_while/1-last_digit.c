#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * rand(): generates random functions
 * Result: (0) always
 */
int main(void)
{       int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{printf("the last digit of n is %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{printf("the last digit of n is %d and is 0\n", n);
	}
	else
	{printf("the last digit of n is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
