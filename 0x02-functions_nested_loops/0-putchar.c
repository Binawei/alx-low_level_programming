#include "main.h"
/**
 * main - print _putchar
 *
 * Return:Always (0) success
 */
int main(void)
{
	int i = 0;
	char printC[] = {"_putchar"};

	while (i < 8)
	{
		_putchar(printC[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
