#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');    /* Print the first digit */
			putchar(j + '0');    /* Print the second digit */
			if (!(i == 8 && j == 9))  /* Check if it's not the last combination */
			{
				putchar(',');   /* Print comma */
				putchar(' ');   /* Print space */
			}
		}
	}
	putchar('\n');  /* Print newline */
	return (0);
}
