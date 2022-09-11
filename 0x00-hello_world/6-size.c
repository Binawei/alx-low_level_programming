#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer
 *
 * Return: Always (0) success
 */
int main(void)
{
	int intType;
	char charType;
	long longType;
	double longlongType;
	float floatType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongType));
	printf("Size of a long int: %zu bytes\n", sizeof(longType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));
	return (0);
}
