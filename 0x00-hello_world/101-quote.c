#include <unistd.h>

int main(void)
{
	/* Message to be printed to stderr */
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	/* Using the write system call to print to stderr */
	write(STDERR_FILENO, message, 52); /* 52 is the length of the message */
	return (1); /* Return 1 as required */
}
