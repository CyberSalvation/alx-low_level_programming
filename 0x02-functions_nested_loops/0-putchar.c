#include <unistd.h>

/**
 * _putchar - writes the character c stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, end errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * main - entry point of the program
 *
 * Description: Print "_putchar" followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
