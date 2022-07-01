#include <stdio.h>
#include <unistd.h>

/**
 * main - prints messages to standard error
 * Description: print without using printf or puts options
 * Return: returns 1 if sucessful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);

	return (1);
}
