#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints a message to stderr
 *
 * Return: Always retuns 1 (Success)
 *
 */
int main(void)
{
	/* Message to be printed to stderr */
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	/* Using the write system call to print to stderr */
	write(STDERR_FILENO, msg, 59); /* 52 is the length of the message */
	return (1); /* Return 1 as required */
}
