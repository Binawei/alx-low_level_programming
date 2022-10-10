#include <unistd.h>
/**
 * _putchar - wrtes the character c to stout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error -1, and errno is set approriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
