#include <stdio.h>
/**
 * main-Entry point
 * Return: Always 0 (success)
 * scanf() takes input
 * printf() displays output
 */
int main(void)
{      int n;
	printf("please enter a number");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("%d, is positve\n", n);
	}
	else if (n == 0)
	{
		printf("%d, is zero\n", n);
	}
	else
	{
		printf("%d, is negative\n", n);
	}

	return (0);
}
