#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase followed by a newline
 * using only the putchar function.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
